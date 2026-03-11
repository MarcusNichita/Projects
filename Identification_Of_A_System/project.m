load("proj_fit_15.mat")
X1=id.X{1};
X2=id.X{2};
Y=id.Y;
X1_val=val.X{1};
X2_val=val.X{2};
Y_val=val.Y;
m=0;
deg=31;
MSE_id=zeros(length(deg));
MSE_val=zeros(length(deg));
for t=1:deg
    for n=1:t
        for k=1:n 
        m=m+1;
        end 
    end


phi_id=zeros(length(X1)*length(X2),m);
l=1;
Y_n=zeros(length(X1)*length(X2),1);
    for i=1:length(X1)
        for j=1:length(X2)
            Y_n(l)=Y(i,j);  
            m2=1;
            for n=1:t
                for k=1:n
                    phi_id(l,m2)=(X1(i)^(n-k)*(X2(j)^(k-1)));
                    m2=m2+1;
                end   
            end
            l=l+1;
        end
    end
theta=(phi_id)\Y_n;
Y_aprox(:,t)=phi_id*theta;  
Y_aprox_grid = zeros(length(X1),length(X2));
row = 1;
    for i = 1:length(X1)
        for j = 1:length(X2)
            Y_aprox_grid(i, j) = Y_aprox(row,t);
            row = row + 1;
        end
    end


sum=0;
    for i=1:length(Y)
        for j=1:length(Y_aprox_grid)
            sum=sum+((Y_aprox_grid(i,j)-Y(i,j))^2);
        end
    end
MSE_id(t)=sum/length(Y)/length(Y_aprox_grid);


phi_val=zeros(length(X1_val)*length(X2_val),m);
l=1;
    for i=1:length(X1_val)
        for j=1:length(X2_val) 
            m2=1;
            for n=1:t
                for k=1:n
                    phi_val(l,m2)=(X1_val(i)^(n-k)*(X2_val(j)^(k-1)));
                    m2=m2+1;
                end   
            end
            l=l+1;
       end
   end
Y_aprox_val(:,t)=phi_val*theta;
Y_aprox_val_grid = zeros(length(X1_val),length(X2_val));
row = 1;
    for i = 1:length(X1_val)
        for j = 1:length(X2_val)
        Y_aprox_val_grid(i, j) = Y_aprox_val(row,t);
        row = row + 1;
        end
    end


sum=0;
    for i=1:length(Y_val)
        for j=1:length(Y_aprox_val_grid)
            sum=sum+((Y_aprox_val_grid(i,j)-Y_val(i,j))^2);
        end
    end
MSE_val(t)=sum/length(Y_val)/length(Y_aprox_val_grid);
end


[a,b]=min(MSE_val);
y_val_min=Y_aprox_val(:,b);
row=1;
for i = 1:length(X1_val)
    for j = 1:length(X2_val)
        Y_aprox_val_grid(i, j) = Y_aprox_val(row,b);
        row = row + 1;
    end
end


figure;
mesh(X1,X2,Y);
title('Given values for "id"');
figure;
mesh(X1,X2,Y_aprox_grid);
title('Approximated values for "id"');
figure;
mesh(X1_val,X2_val,Y_val);
title('Given values for "val"')
figure;
mesh(X1_val,X2_val,Y_aprox_val_grid);
title('Optimal approximated values for "val"');
figure;
plot(MSE_id) 
hold on
plot(MSE_val,'-o')
hold on 
plot(b,a,'-x','Color',"b")
xlabel('Degree of Polynomial');
ylabel('Value of MSE');



