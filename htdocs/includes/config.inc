<?php

define('HOSTNAME', 'block.explorer.net');
define('REDIRECT_CANONICAL', false);

define('SITEMAP_URLS_PER_SECTION', 10000);

define('MAINTENANCE_MODE', false);
define('MAINTENANCE_MODE_ADMINIP', '192.168.1.1');

define('CACHE_ENABLED', true);
define('CACHE_DIR', '/tmp/bbe');
define('CACHE_DIR_LEVELS', 1);
define('CACHE_APP_MAGIC', 19); // increment this when application changes

class Config {
    static $dbname = "explore";
    static $address_version = "00";
    //static $address_version = "6F";
    static $rpc = array("user" => "ladacoin",
                        "password" => "7AvathEBracheCra",
                        "target" => "127.0.0.1",
                        "port" => 8332);
}

class TestnetConfig {
    static $dbname = "testexplore";
    static $address_version = "48";
    static $rpc = array("user" => "ladacoin",
                        "password" => "7AvathEBracheCra",
                        "target" => "127.0.0.1",
                        "port" => 9332);
}
date_default_timezone_set('UTC');

