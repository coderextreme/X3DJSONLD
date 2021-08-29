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
    GeoLOD(center=(41.64793081331529,-71.25730472459475,0.0),range=4300.153,child1Url=['../../tiles/4/newport12-10.x3d'],child2Url=['../../tiles/4/newport12-11.x3d'],child3Url=['../../tiles/4/newport13-10.x3d'],child4Url=['../../tiles/4/newport13-11.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport6-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.63178909776027,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=0.0016141715,zDimension=24,zSpacing=0.0014036275,height=[0,0,0,0,0,0,1,3,4,5,13,26,35,29,23,19,14,12,12,9,3,0,0,0,0,0,0,1,1,1,2,9,26,33,29,25,21,14,8,6,5,3,0,0,0,0,0,0,0,1,1,1,7,23,32,28,24,22,13,7,3,5,4,0,0,0,0,0,0,0,0,0,0,7,16,26,28,23,19,13,5,2,3,5,0,0,0,0,0,0,0,0,0,0,3,9,20,24,23,16,11,4,1,2,3,0,0,0,0,0,0,0,0,0,0,0,6,10,17,20,16,11,3,1,1,2,0,0,0,0,0,0,0,0,0,0,0,0,4,9,14,13,9,4,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,6,9,8,2,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,5,3,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,13,18,18,9,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,14,27,29,36,20,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,8,23,36,39,35,30,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,16,31,37,42,37,33,15,0,0,0,0,0,1,1,1,1,1,0,0,0,3,17,29,34,38,34,27,15,0,0,0,0,0,1,1,1,1,1,0,0,0,7,18,25,30,28,31,21,14,2,0,0,0,0,1,1,1,1,1,0,0,0,3,11,17,25,26,23,18,9,9,0,0,0,0,1,1,1,1,1,0,0,0,5,6,17,23,22,20,18,13,5,0,0,0,0,1,1,1,1,1,0,0,0,0,7,13,17,24,23,13,13,10,0,0,0,0,1,1,1,1,1,0,0,0,0,2,11,16,23,19,13,10,8,3,0,0,0,1,1,1,1,1,0,0,0,0,2,5,14,13,15,16,12,11,4,0,0,0,1,1,1,1,1,0,0,0,0,1,5,13,14,15,17,11,11,3,0,0,0,1,1,1,1,1],
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
