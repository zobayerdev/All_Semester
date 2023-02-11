for a = 0:1 
    for b = 0:1 
        if a == 1 && b == 1
            and = 1;
        else
            and = 0;
        end
        fprintf('value of and: %d\n', and);
        
        if a == 0 && b == 0
            or = 0;
        else
            or = 1;
        end
        fprintf('value of or: %d\n', or);
        
        if and == 1 && or == 1
            xor = 0;
        elseif and == 0 && or == 0
            xor = 0;
        else
            xor = 1;
        end
        fprintf('value of xor: %d\n', xor);
        
    end
end
