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
    GeoLOD(center=(41.76663080343592,-71.10967487145433,0.0),range=6150.5674,child1Url=['../../tiles/5/newport26-30.x3d'],child2Url=['../../tiles/5/newport26-31.x3d'],child3Url=['../../tiles/5/newport27-30.x3d'],child4Url=['../../tiles/5/newport27-31.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport13-15.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.13166022549774,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[60,58,53,51,54,53,54,50,53,54,60,56,50,41,39,39,39,39,41,42,48,48,64,66,60,57,59,58,50,51,49,58,65,65,56,48,39,39,39,39,39,42,47,48,58,59,64,62,64,58,50,50,49,56,64,69,61,54,40,39,39,39,39,45,49,51,34,46,58,68,66,58,51,49,49,56,66,70,65,54,42,39,39,39,39,41,44,45,12,32,47,68,60,49,48,47,49,57,65,69,74,55,45,39,39,39,39,40,45,46,7,20,37,59,50,44,48,49,56,64,70,74,70,59,45,39,39,39,39,46,50,50,1,10,26,37,41,49,52,52,63,72,71,75,70,64,55,42,39,39,41,43,47,47,1,1,12,20,41,54,54,56,58,60,63,63,69,63,59,48,39,40,41,45,46,44,1,1,9,16,29,50,57,59,60,58,59,63,65,63,54,45,40,40,42,47,47,48,1,1,1,11,23,43,59,60,65,61,61,67,67,66,58,50,41,44,46,49,48,46,1,1,1,3,15,34,53,55,59,63,65,67,66,61,57,55,48,48,53,53,46,44,2,2,2,2,11,27,44,53,56,59,59,64,65,63,54,50,48,50,52,50,45,45,1,1,1,10,16,23,38,47,53,56,55,56,61,58,53,47,50,54,56,50,48,48,2,2,2,4,16,16,41,49,49,51,55,56,54,51,51,48,53,61,59,53,51,52,2,2,2,1,15,11,32,49,47,49,58,58,55,53,46,43,57,65,61,56,53,50,2,2,2,1,8,7,21,32,36,46,53,55,53,47,46,52,67,71,67,65,61,60,2,2,2,1,0,2,2,16,21,30,30,33,43,38,48,54,59,65,72,71,62,61,2,2,2,1,1,2,1,1,12,20,20,20,26,27,42,55,58,62,67,63,58,53,2,11,12,5,1,1,1,1,1,1,1,6,20,16,23,46,49,57,54,43,57,52,2,2,2,9,2,1,1,1,1,1,1,1,1,13,12,21,30,40,40,38,32,33,2,3,6,18,7,1,1,1,1,1,1,1,5,3,5,15,19,23,19,28,23,22,2,4,7,19,8,1,1,1,1,1,1,1,3,5,5,14,19,22,19,27,23,21],
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
