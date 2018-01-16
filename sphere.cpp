#include "sphere.h"
#include "ray.h"


// Determine if the ray intersects with the sphere
bool Sphere::Intersection(const Ray& ray, std::vector<Hit>& hits) const
{
    // TODO
    vec3 tem;
    vec3 EC = ray.endpoint - center;
    double b = 2 * tem.dot(EC, ray.direction);
    double c = tem.dot(EC, EC) - radius * radius;
    double 
    if(b * b - 4 * c > 0){
    	double t1 = (double)((-b - sqrt(b * b - 4 * c))/2);
    	double t2 = (double)((-b + sqrt(b * b - 4 * c))/2);
    	if(t2 <= small_t) return false;
    	else if(t1 <= small_t) {
    		if(t1 < hits.t || hits.t == 0)
    			hits.object = this;
    			hits.t = t2;
    	}
    	else {
    		if(t1 < hits.t || hits.t == 0)
    			hits.object = this;
    			hits.t = t1;
    	}
    	//hits.ray_exiting = true;
    	return true;
    }
    return false;
}

vec3 Sphere::Normal(const vec3& point) const
{
    vec3 normal;
    // TODO: set the normal
    return normal;
}
