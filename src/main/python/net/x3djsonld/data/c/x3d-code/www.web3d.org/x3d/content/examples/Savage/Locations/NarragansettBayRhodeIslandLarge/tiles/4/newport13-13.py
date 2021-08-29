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
    GeoLOD(center=(41.76663080343592,-71.19761628762797,0.0),range=6150.5674,child1Url=['../../tiles/5/newport26-26.x3d'],child2Url=['../../tiles/5/newport26-27.x3d'],child3Url=['../../tiles/5/newport27-26.x3d'],child4Url=['../../tiles/5/newport27-27.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport13-13.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.21960164167137,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[1,1,1,2,6,4,5,4,12,17,13,7,2,1,1,7,7,8,14,25,30,30,1,1,1,1,1,1,4,6,11,20,19,12,4,1,1,7,9,6,6,18,29,30,1,1,1,1,5,7,5,5,7,14,21,15,4,1,1,8,10,7,4,11,24,28,4,3,1,1,5,7,7,7,6,8,16,18,9,8,1,8,14,9,4,12,30,36,15,11,4,1,2,8,6,4,8,1,7,11,12,6,1,1,6,5,8,14,28,30,18,14,13,9,3,1,1,1,1,1,3,7,9,5,1,1,1,3,12,16,27,29,18,12,13,13,3,1,1,3,2,1,1,6,9,5,1,3,1,2,12,18,28,30,20,13,12,3,1,1,6,3,10,2,1,8,8,8,1,5,1,5,13,18,26,29,20,17,11,1,1,3,7,4,7,1,1,1,6,10,1,1,1,9,14,23,29,29,20,19,10,3,5,9,5,5,7,1,2,2,8,9,5,9,3,12,19,23,36,36,22,19,13,11,8,7,8,5,4,3,6,9,8,9,11,9,9,12,23,24,35,35,23,17,14,13,13,10,7,6,4,5,11,14,11,12,11,15,13,13,24,30,34,34,20,14,13,13,14,13,7,10,4,12,14,15,14,11,12,18,21,17,22,32,39,39,25,17,15,12,15,13,6,13,8,16,16,16,17,15,12,12,25,25,23,34,42,42,20,16,12,10,14,13,6,18,12,21,18,17,18,13,14,16,25,31,26,31,43,45,25,18,10,9,13,15,7,16,15,27,25,18,16,13,17,17,21,28,25,30,42,44,29,22,18,11,8,6,10,11,16,28,27,19,18,18,13,15,19,20,24,25,38,41,30,24,14,13,9,8,10,13,17,30,29,22,20,28,17,15,14,17,22,25,34,37,32,25,17,9,8,8,10,13,18,29,26,21,21,25,26,27,15,17,23,28,33,34,33,26,21,9,11,11,15,16,20,25,25,23,25,25,25,22,20,17,20,26,31,31,36,29,22,15,11,14,14,16,18,22,25,26,26,31,31,35,29,28,23,21,30,35,36,29,22,16,11,14,14,15,17,23,25,26,26,31,31,36,30,30,23,23,29,34],
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
