###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Interactive',version='3.3',
  head=head(
    children=[
    component(level=1,name='Geospatial'),
    meta(content='SriCampus137.x3d',name='title'),
    meta(content='SRI campus building',name='description'),
    meta(content='Aaron Heller, SRI International',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 February 2000',name='created'),
    meta(content='29 April 2003',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://www.geovrml.org/examples',name='reference'),
    meta(content='X3D geospatial example',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus137.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SriCampus137.x3d'),
    TouchSensor(DEF='MouseOverPopupDescription',description='Extrusion-3',enabled=False),
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.75,0.75,0.75))),
      geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,35,34,-1,34,35,33,32,-1,32,33,31,30,-1,30,31,29,28,-1,28,29,27,26,-1,26,27,25,24,-1,24,25,23,22,-1,22,23,21,20,-1,20,21,19,18,-1,18,19,17,16,-1,16,17,15,14,-1,14,15,13,12,-1,12,13,11,10,-1,10,11,9,8,-1,8,9,7,6,-1,6,7,5,4,-1,4,5,3,2,-1,2,3,1,0,-1,1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,-1,34,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,-1],solid=False,
        coord=Coordinate(DEF='OBJECT-137-VERTICES',point=[(0.0,0.0,0.0),(0.0,-18.85569,0.0),(2.291761,6.42941E-4,10.547004),(2.291761,-18.85569,10.547004),(-2.8185573,6.42941E-4,11.723005),(-2.8185573,-18.85569,11.723005),(-3.5341625,6.42941E-4,15.113612),(-3.5341625,-18.85569,15.113612),(-2.9920127,6.42941E-4,18.134363),(-2.9920127,-18.85569,18.134363),(-0.9843536,6.42941E-4,21.440897),(-0.9843536,-18.85569,21.440897),(1.5354041,6.42941E-4,22.27623),(1.5354041,-18.85569,22.27623),(5.066231,6.42941E-4,21.199247),(5.066231,-18.85569,21.199247),(8.862147,6.42941E-4,37.18861),(8.862147,-18.85569,37.18861),(-7.3980722,6.42941E-4,40.557735),(-7.3980722,-18.85569,40.557735),(-9.735897,6.42941E-4,30.142391),(-9.735897,-18.85569,30.142391),(-5.894487,6.42941E-4,28.914547),(-5.894487,-18.85569,28.914547),(-4.0522604,6.42941E-4,26.922781),(-4.0522604,-18.85569,26.922781),(-3.8651404,6.42941E-4,24.002205),(-3.8651404,-18.85569,24.002205),(-5.6912127,6.42941E-4,19.866385),(-5.6912127,-18.85569,19.866385),(-7.6994147,6.42941E-4,18.16032),(-7.6994147,-18.85569,18.16032),(-12.57047,6.42941E-4,18.968575),(-12.57047,-18.85569,18.968575),(-16.333782,6.42941E-4,3.5941617),(-16.333782,-18.85569,3.5941617)])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SriCampus137.py")
