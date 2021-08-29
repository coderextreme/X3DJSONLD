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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoLOD(center=(41.5833639510952,-71.32187158681484,0.0),range=4300.153,child1Url=['../../tiles/4/newport8-6.x3d'],child2Url=['../../tiles/4/newport8-7.x3d'],child3Url=['../../tiles/4/newport9-6.x3d'],child4Url=['../../tiles/4/newport9-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport4-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.56722223554018,-71.33801330236986,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=0.0016141715,zDimension=24,zSpacing=0.0014036275,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,8,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,11,7,12,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,10,14,15,13,9,5,6,1,0,0,0,0,0,0,0,0,0,0,0,0,7,12,15,18,16,14,10,8,6,3,0,0,0,0,0,0,0,0,0,0,11,13,19,18,22,20,12,19,11,9,9,7,0,0,0,0,0,0,0,0,6,15,20,23,27,25,24,24,16,13,15,11,4,0,0,0,0,0,0,0,0,11,19,25,26,26,26,29,29,22,19,17,14,12,5,0,0,0,0,0,0,0,10,21,24,24,26,30,27,32,24,24,20,21,19,12,0,0,0,0,0,0,5,13,19,21,25,23,33,30,31,26,23,28,26,25,19,9,0,0,0,0,0,3,13,21,24,20,25,30,34,33,29,27,28,27,29,24,12,0,0,0,0,0,11,15,19,21,21,27,29,33,29,30,26,27,29,32,27,15,0,0,0,0,0,1,17,19,21,21,26,29,31,30,28,25,29,35,31,29,21,14,0,0,0,0,0,15,19,22,22,25,29,31,30,30,27,29,37,31,29,22,15,0,0,0],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
