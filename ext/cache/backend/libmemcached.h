
/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2013 Phalcon Team (http://www.phalconphp.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@phalconphp.com so we can send you a copy immediately.       |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
  |          Eduar Carvajal <eduar@phalconphp.com>                         |
  +------------------------------------------------------------------------+
*/

extern zend_class_entry *phalcon_cache_backend_libmemcached_ce;

PHALCON_INIT_CLASS(Phalcon_Cache_Backend_Libmemcached);

PHP_METHOD(Phalcon_Cache_Backend_Libmemcached, __construct);
PHP_METHOD(Phalcon_Cache_Backend_Libmemcached, _connect);
PHP_METHOD(Phalcon_Cache_Backend_Libmemcached, get);
PHP_METHOD(Phalcon_Cache_Backend_Libmemcached, save);
PHP_METHOD(Phalcon_Cache_Backend_Libmemcached, delete);
PHP_METHOD(Phalcon_Cache_Backend_Libmemcached, queryKeys);
PHP_METHOD(Phalcon_Cache_Backend_Libmemcached, exists);
PHP_METHOD(Phalcon_Cache_Backend_Libmemcached, increment);
PHP_METHOD(Phalcon_Cache_Backend_Libmemcached, decrement);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_cache_backend_libmemcached___construct, 0, 0, 1)
	ZEND_ARG_INFO(0, frontend)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_cache_backend_libmemcached_get, 0, 0, 1)
	ZEND_ARG_INFO(0, keyName)
	ZEND_ARG_INFO(0, lifetime)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_cache_backend_libmemcached_save, 0, 0, 0)
	ZEND_ARG_INFO(0, keyName)
	ZEND_ARG_INFO(0, content)
	ZEND_ARG_INFO(0, lifetime)
	ZEND_ARG_INFO(0, stopBuffer)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_cache_backend_libmemcached_delete, 0, 0, 1)
	ZEND_ARG_INFO(0, keyName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_cache_backend_libmemcached_querykeys, 0, 0, 0)
	ZEND_ARG_INFO(0, prefix)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_cache_backend_libmemcached_exists, 0, 0, 0)
	ZEND_ARG_INFO(0, keyName)
	ZEND_ARG_INFO(0, lifetime)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_cache_backend_libmemcached_increment, 0, 0, 0)
	ZEND_ARG_INFO(0, keyName)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_cache_backend_libmemcached_decrement, 0, 0, 0)
	ZEND_ARG_INFO(0, keyName)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

PHALCON_INIT_FUNCS(phalcon_cache_backend_libmemcached_method_entry){
	PHP_ME(Phalcon_Cache_Backend_Libmemcached, __construct, arginfo_phalcon_cache_backend_libmemcached___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR) 
	PHP_ME(Phalcon_Cache_Backend_Libmemcached, _connect, NULL, ZEND_ACC_PROTECTED) 
	PHP_ME(Phalcon_Cache_Backend_Libmemcached, get, arginfo_phalcon_cache_backend_libmemcached_get, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Cache_Backend_Libmemcached, save, arginfo_phalcon_cache_backend_libmemcached_save, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Cache_Backend_Libmemcached, delete, arginfo_phalcon_cache_backend_libmemcached_delete, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Cache_Backend_Libmemcached, queryKeys, arginfo_phalcon_cache_backend_libmemcached_querykeys, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Cache_Backend_Libmemcached, exists, arginfo_phalcon_cache_backend_libmemcached_exists, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Cache_Backend_Libmemcached, increment, arginfo_phalcon_cache_backend_libmemcached_increment, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Cache_Backend_Libmemcached, decrement, arginfo_phalcon_cache_backend_libmemcached_decrement, ZEND_ACC_PUBLIC) 
	PHP_FE_END
};
