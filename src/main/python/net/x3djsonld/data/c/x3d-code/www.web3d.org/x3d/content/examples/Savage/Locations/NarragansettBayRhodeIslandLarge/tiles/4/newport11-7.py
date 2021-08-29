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
    GeoLOD(center=(41.669870498763935,-71.46144053614887,0.0),range=6150.5674,child1Url=['../../tiles/5/newport22-14.x3d'],child2Url=['../../tiles/5/newport22-15.x3d'],child3Url=['../../tiles/5/newport23-14.x3d'],child4Url=['../../tiles/5/newport23-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport11-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[22,18,17,16,20,16,16,19,23,20,20,22,23,19,4,10,12,11,13,22,25,25,23,21,21,23,18,21,22,23,18,19,17,22,20,15,4,14,14,13,12,22,27,28,32,31,27,25,28,28,19,15,13,17,16,18,16,5,18,16,14,12,17,20,28,30,31,33,35,36,37,31,25,19,18,15,15,15,14,18,19,14,13,11,15,17,25,28,39,36,35,32,30,38,31,20,21,24,15,14,17,19,22,19,16,9,7,14,23,24,45,41,35,31,33,38,32,20,16,15,16,16,18,21,21,20,21,13,9,2,14,17,59,50,38,32,32,27,28,19,17,20,22,18,21,22,18,12,14,14,14,5,13,15,66,54,42,36,28,27,28,24,23,23,26,21,25,15,11,8,14,18,17,16,5,0,64,54,39,32,30,32,29,25,22,20,22,23,15,11,4,0,4,23,19,14,14,14,56,47,38,30,31,32,27,25,22,19,18,16,13,23,16,0,0,16,15,15,15,13,53,47,41,33,34,32,31,26,25,20,11,18,25,28,26,13,0,0,5,14,18,18,49,46,40,36,35,34,35,33,26,19,14,18,25,30,28,23,15,0,0,0,20,19,48,47,39,41,38,35,34,34,22,20,25,29,35,41,36,31,22,12,0,0,15,20,50,47,44,41,38,39,30,25,25,25,30,45,45,48,49,41,29,10,6,0,6,15,57,48,40,37,39,33,32,27,27,23,28,43,49,55,50,42,29,17,3,0,2,11,53,44,41,37,34,35,38,30,26,28,33,48,58,62,53,42,25,17,4,0,0,0,50,43,37,35,38,43,38,31,33,33,55,66,63,62,54,37,27,18,0,0,0,0,56,43,36,38,42,46,46,39,33,44,65,73,72,69,56,38,27,16,0,0,0,0,59,47,38,32,46,52,50,39,38,50,67,79,73,67,53,40,26,14,7,0,3,0,61,47,39,35,43,51,47,42,43,56,75,82,73,68,57,41,26,13,8,0,0,0,65,45,40,32,44,50,52,44,44,57,78,79,76,67,60,43,26,9,0,0,0,0,65,45,39,32,45,50,52,44,43,58,78,79,77,66,59,44,26,9,0,0,0,0],
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
