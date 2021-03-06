#ifndef CS_FW_SRC_SJ_APP_H_
#define CS_FW_SRC_SJ_APP_H_

struct v7;

enum mg_app_init_result {
  MG_APP_INIT_ERROR = 0,
  MG_APP_INIT_SUCCESS = 1,
};

/* The user app init function. A weak stub is provided in sj_app_init.c,
 * which can be overridden by the user. */
int sj_app_init(struct v7 *v7);

#endif /* CS_FW_SRC_SJ_APP_H_ */
