/* Define your modules here */
static const Module modules[] = {
    /*      COMMAND             INTERVAL    */
    {       "mb-cputemp",          5           },
    {       "mb-memory",           5           },
    {       "mb-volume",           0           },
    {       "mb-clock",            1           },
};

/* Redefine if you want to place modbar's named pipe somewhere else */
#define PIPE_PATH "/var/run/user/1000/modbar.pipe"

/* Symbol to separate modules (blank if none) */
#define SEPARATOR " | "
