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
    GeoLOD(center=(41.62149034642794,-71.2855577038016,0.0),range=6150.5674,child1Url=['../../tiles/5/newport20-22.x3d'],child2Url=['../../tiles/5/newport20-23.x3d'],child3Url=['../../tiles/5/newport21-22.x3d'],child4Url=['../../tiles/5/newport21-23.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport10-11.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.30754305784501,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[0,0,0,0,5,3,0,0,0,0,0,2,5,26,49,50,45,40,50,59,63,68,0,0,0,0,0,0,0,0,0,0,0,1,11,28,55,58,53,46,46,64,66,67,0,0,0,0,0,0,0,0,0,0,0,5,11,26,41,50,40,46,48,59,69,70,0,0,0,0,0,0,0,0,0,0,0,0,0,11,17,24,33,35,45,51,57,61,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,19,24,35,46,48,49,52,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,17,22,36,45,50,51,52,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,23,33,48,53,58,54,21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,22,35,47,54,44,44,31,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,29,35,30,29,30,42,25,2,0,0,0,0,0,0,0,0,0,0,0,0,0,7,24,18,15,14,11,51,29,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,14,12,11,12,49,32,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,7,14,17,17,39,31,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,14,14,12,37,29,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,12,10,12,33,32,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,12,12,7,6,29,19,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,13,17,10,8,25,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,22,16,6,3,11,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,4,2,2,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
