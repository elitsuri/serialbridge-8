/* database.h — serialbridge database interface */
#pragma once

int  db_init(const char *path);
int  db_insert(const char *name, const char *value);
void db_close(void);
