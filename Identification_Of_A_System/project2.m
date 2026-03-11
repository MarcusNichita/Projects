

load("iddata-15.mat")
u_id=id.u;
y_id=id.y;
u_val=val.u;
y_val=val.y;
m=0;
deg=14;
na=2;
nb=2;
MSE_id=zeros(length(deg));
MSE_val=zeros(length(deg));
y_SIM=zeros(length(u_val),1);
for t=1:deg
m=(na+nb+2)*(na+nb+1)/deg;
m=int64(m);

phi_id=zeros(length(y_id),m);
l=1;
    for i=1:length(u_id)
        m2=1;
        for j=1:na
            for n=1:t+1
                for k=1:n
                    if i-j>0
                        phi_id(l,m2)=((y_id(i-j)^(n-k))*(u_id(i-j)^(k-1)));
                    else
                        phi_id(l,m2)=0;
                    end
                    m2=m2+1;
                end   
            end
        end
        l=l+1;
    end
thetha=phi_id\y_id;
y_pred(:,t)=phi_id*thetha;


sum=0;
    for h=1:length(y_pred)
        sum=sum+((y_pred(h,t)-y_id(h))^2);
    end
MSE_id(t)=sum/length(y_id);


phi_val=zeros(length(y_val),m);
l=1;
    for i=1:length(u_val)
        m2=1;
        for j=1:na
            for n=1:t+1
                for k=1:n
                    if i-j>0
                        phi_val(l,m2)=((y_val(i-j)^(n-k))*(u_val(i-j)^(k-1)));
                    else
                        phi_val(l,m2)=0;
                    end
                    m2=m2+1;
                end   
            end
        end
        l=l+1;
    end
y_pred_val(:,t)=phi_val*thetha;


sum=0;
    for h=1:length(y_pred_val)
        sum=sum+((y_pred_val(h,t)-y_val(h))^2);
    end
MSE_val(t)=sum/length(y_val);


    for i=1:length(u_val)
        phi_sim=zeros(1,m); 
        m2=1;
        for j=1:na
            for n=1:t+1
                for k=1:n
                    if i-j>0
                        phi_sim(1,m2)=(y_SIM(i-j)^(n-k))*(u_val(i-j)^(k-1));
                    else
                        phi_sim(1,m2)=0;
                    end
                    m2=m2+1;
                end
            end
        end
        y_SIM(i)=phi_sim*thetha;
    end


pred=iddata(y_pred,u_id);
pred_val=iddata(y_pred_val,u_val);
id=iddata(y_id,u_id);
val=iddata(y_val,u_val);
sim=iddata(y_SIM,u_val);
model_val=arx(val,[na,nb,1]);
end


[a,b]=min(MSE_val);
best=iddata(y_pred_val(:,b),u_val);
figure;
compare(best,model_val);
title("Model and Best Approximation");
figure;
compare(id,pred);
title("Id and Prediction");
figure;
compare(val,pred_val);
title("Validation and Prediction");
figure;
compare(val,sim);
title("Validation and Simulation");
figure;
compare(val,best);
title("Validation and Best Approximation");
figure;
compare(val,pred_val,sim,model_val);
title("Comparing the validation data set with the prediction, the simulation and the model");
figure;
plot(MSE_id) 
hold on
plot(MSE_val,'-o')
hold on 
plot(b,a,'-x','Color',"b")
xlabel('Degree of Polynomial');
ylabel('Value of MSE');
