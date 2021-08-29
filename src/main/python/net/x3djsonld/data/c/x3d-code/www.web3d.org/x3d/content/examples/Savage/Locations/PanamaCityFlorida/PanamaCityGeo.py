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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    component(level=1,name='Geospatial'),
    meta(content='PanamaCityGeo.x3d',name='title'),
    meta(content='Bathymetry and terrain model of Panama City, Florida',name='description'),
    meta(content='Byounghyun Yoo',name='creator'),
    meta(content='11 May 2007',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='https://savage.nps.edu/Savage/Locations/PanamaCityFlorida/PanamaCityGeo.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(translation=(-21644.912,19677.194602272728,158729.36),
      children=[
      Transform(
        children=[
        Viewpoint(DEF='Vp1',description='Viewpoint 1',orientation=(0,1,0,-0.795))])]),
    Transform(translation=(-21644.9128347449,19677.194602272728,-28859.883),
      children=[
      Transform(
        children=[
        Viewpoint(DEF='Vp2',description='Viewpoint 2',orientation=(0,1,0,-2.356))])]),
    Transform(translation=(243505.27,19677.194602272728,-28859.883),
      children=[
      Transform(
        children=[
        Viewpoint(DEF='Vp3',description='Viewpoint 3',orientation=(0,1,0,2.356))])]),
    Transform(translation=(243505.27,19677.194602272728,173159.3),
      children=[
      Transform(
        children=[
        Viewpoint(DEF='Vp4',description='Viewpoint 4',orientation=(0,1,0,0.795))])]),
    Viewpoint(DEF='Vp5',description='Viewpoint 5',orientation=(-1,0,0,1.54),position=(66738.484,36074.855,101009.59)),
    Viewpoint(DEF='Vp6',description='Viewpoint 6',orientation=(-1,0,0,1.64),position=(39682.34,36074.855,43289.824)),
    Viewpoint(DEF='Vp7',description='Viewpoint 7',orientation=(-1,0,0,1.54),position=(174963.05,36074.855,57719.766)),
    Viewpoint(DEF='Vp8',description='Viewpoint 8',orientation=(-1,0,0,1.54),position=(189392.98,36074.855,93794.625)),
    NavigationInfo(speed=10,type=[FLY","EXAMINE","'ANY'],visibilityLimit=2254678.4),
    PointLight(ambientIntensity=1,location=(0,100000,0),radius=1000000),
    Collision(
      children=[
      GeoLocation(geoCoords=(-87.20,30.80,0),
        children=[
        Inline(url=["tiles/0/PanamaCity0-0.x3d","https://savage.nps.edu/Savage/Locations/PanamaCityFlorida/tiles/0/PanamaCity0-0.x3d"])])]),
    GeoViewpoint(description='GeoViewpoint 1',orientation=(0,-1,0,0),position=(-86.225,30.15,1000))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PanamaCityGeo.py")
