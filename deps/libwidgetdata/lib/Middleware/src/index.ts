import IS2Middleware from './infostats2';
import GroovyAPIMiddlware from './groovyapi';
import XenInfoMiddleware from './xeninfo';

import NativeInterface from './native-interface';

class XENDMiddleware extends NativeInterface {
    private infostats2: IS2Middleware = new IS2Middleware();
    private groovyAPI: GroovyAPIMiddlware = new GroovyAPIMiddlware();
    private xeninfo: XenInfoMiddleware = new XenInfoMiddleware();

    public init(): void {
        this.infostats2.initialise(this);
        this.groovyAPI.initialise(this);
        this.xeninfo.initialise(this);
    }
}

// Setup middleware
export const _xenhtml_middleware = new XENDMiddleware();
_xenhtml_middleware.init();