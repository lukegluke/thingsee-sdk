/* THIS FILE IS GENERATED BY BUILD TOOLS! DO NOT TOUCH! DO NOT COMMIT! */

#include <nuttx/config.h>
#include <sys/types.h>
#include "connector.h"

extern const struct ts_connector initialstate;
extern const struct ts_connector kii;
extern const struct ts_connector meshblu;
extern const struct ts_connector tsc;

const struct ts_connector * const ts_connectors[] = {
        &initialstate,
        &kii,
        &meshblu,
        &tsc,
        NULL,
};