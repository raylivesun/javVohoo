model dl3ama_ncrmse "Description"
    
    /**
    * In their chapter, Webb and Peck (Chap. 2) do not
    * attempt to conceal that it was a beneficial development that these two mathematics
    * educators on opposite sides of the Atlantic with a passion for reforming mathematics
    * teaching and learning, have become colleagues and partners. In the 1990s Romberg
    * also brought about a connection with Puerto Rico (Chap. 16) by proposing López-
    * Fernández to collaborate with him and De Lange on the development of Spanish
    * versions of the materials of the textbook series Mathematics in Context (MiC) that
    * NCRMSE was developing together with the Dutch.**/

    Real time = 10;
    Real cost = 0;
    Real benefit = 0;
    Real ncrmse = 0;
    Real ncrmse_target = 0.2;
    Real time_remaining = time;
    Real ncrmse_improvement = 0;
    Real ncrmse_improvement_threshold = 0.05;
    Real ncrmse_improvement_count = 0;
    Real ncrmse_improvement_count_threshold = 5;
    Real ncrmse_improvement_count_reset_time = 0;
    Real ncrmse_improvement_count_reset_time_threshold = 30;
    Real ncrmse_previous = 0;
    Real ncrmse_previous_previous = 0;
    Real ncrmse_previous_previous_previous = 0;
    Real ncrmse_previous_previous_previous_previous = 0;
    Real ncrmse_previous_previous_previous_previous_previous = 0;
    Real ncrmse_previous_previous_previous_previous_previous_previous = 0;

end dl3ama_ncrmse;