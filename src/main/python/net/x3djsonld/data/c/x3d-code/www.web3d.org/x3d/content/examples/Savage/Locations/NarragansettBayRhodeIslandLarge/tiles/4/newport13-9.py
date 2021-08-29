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
    GeoLOD(center=(41.76663080343592,-71.37349911997524,0.0),range=6150.5674,child1Url=['../../tiles/5/newport26-18.x3d'],child2Url=['../../tiles/5/newport26-19.x3d'],child3Url=['../../tiles/5/newport27-18.x3d'],child4Url=['../../tiles/5/newport27-19.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport13-9.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.39548447401864,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[11,11,12,13,14,15,14,14,3,0,0,0,0,0,0,0,0,0,0,0,0,0,13,15,13,15,15,16,15,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,17,16,14,14,14,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,18,13,11,11,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,4,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,13,14,8,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,18,15,15,12,9,0,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,15,14,16,15,15,17,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,16,13,15,15,15,15,12,7,0,0,0,0,0,0,0,0,0,0,0,0,0,12,12,12,1,1,0,11,6,0,0,0,0,0,0,0,0,0,0,3,1,0,1,14,12,7,8,10,7,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,12,13,13,13,12,12,10,0,0,0,0,0,0,0,0,0,0,7,6,0,0,0,14,19,21,19,13,11,6,0,0,0,0,0,0,0,0,0,0,7,2,2,1,1,17,20,18,18,18,8,0,0,0,0,0,0,0,0,0,0,0,5,2,3,1,1,11,14,16,14,8,0,0,0,0,0,0,0,0,0,0,0,0,9,7,3,1,1,10,11,14,13,2,0,0,0,0,0,0,0,0,0,0,0,0,9,7,6,1,4,5,8,13,11,0,2,0,0,0,0,0,0,0,0,0,0,5,6,3,1,5,5,2,1,1,2,0,2,0,0,0,0,0,0,0,0,0,1,9,9,7,1,5,6,2,6,10,9,2,1,0,0,0,0,0,0,0,3,5,7,8,8,4,1,2,1,1,3,8,6,0,0,0,0,0,0,0,0,0,0,9,9,9,8,6,7,6,5,1,8,9,7,0,0,0,0,0,0,0,0,0,0,1,9,10,11,8,8,9,9,1,9,9,8,0,0,0,0,0,0,0,0,0,0,0,9,10,11,8,8,9,8],
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
