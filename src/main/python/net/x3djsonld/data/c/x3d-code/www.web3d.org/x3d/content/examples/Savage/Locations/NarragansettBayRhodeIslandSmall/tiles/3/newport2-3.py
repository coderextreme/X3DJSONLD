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
    GeoLOD(center=(41.51879708887511,-71.32187158681484,0.0),range=4300.153,child1Url=['../../tiles/4/newport4-6.x3d'],child2Url=['../../tiles/4/newport4-7.x3d'],child3Url=['../../tiles/4/newport5-6.x3d'],child4Url=['../../tiles/4/newport5-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport2-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.33801330236986,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=0.0016141715,zDimension=24,zSpacing=0.0014036275,height=[0,0,0,0,0,0,0,0,0,0,0,7,7,9,4,6,8,12,20,27,25,0,0,0,0,0,0,0,0,0,0,0,4,9,10,7,4,5,10,17,26,28,0,0,0,0,0,0,0,1,0,0,4,5,7,5,6,4,5,10,17,23,28,0,0,0,0,0,0,0,0,0,0,7,8,9,5,3,3,8,14,22,25,27,0,0,0,0,0,0,11,5,2,0,10,10,5,4,6,2,18,20,24,25,29,0,0,0,0,0,6,13,12,6,0,9,7,5,6,3,8,16,24,33,29,27,0,0,0,0,0,7,9,12,10,0,1,3,4,6,9,13,21,34,37,31,30,0,0,0,0,0,2,8,5,3,0,0,0,6,5,12,20,28,41,36,35,35,0,0,0,0,0,0,7,2,1,0,0,3,3,2,13,26,36,43,37,38,39,0,0,0,0,0,0,0,0,0,0,1,7,6,10,17,30,38,33,35,37,39,0,0,0,0,0,0,0,0,0,0,9,10,10,14,16,28,29,26,28,30,33,0,0,0,0,0,0,0,0,0,4,14,16,16,14,14,20,21,17,19,21,24,0,0,0,0,0,0,3,2,6,16,20,17,9,7,9,12,13,12,11,16,20,0,0,0,0,0,0,0,8,16,20,18,4,0,1,1,3,7,7,10,13,22,0,0,0,0,0,0,0,4,19,16,0,0,0,0,0,0,0,5,9,16,22,0,0,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,7,11,14,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,12,19,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,9,22,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,16,24,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,11,24,32,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,23,29,32,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,30,37,33,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,32,36,34,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,35,36,34,29],
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
