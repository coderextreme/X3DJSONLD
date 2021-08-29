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
    GeoLOD(center=(41.52473004175595,-71.46144053614887,0.0),range=6150.5674,child1Url=['../../tiles/5/newport16-14.x3d'],child2Url=['../../tiles/5/newport16-15.x3d'],child3Url=['../../tiles/5/newport17-14.x3d'],child4Url=['../../tiles/5/newport17-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport8-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[13,16,17,17,21,23,28,29,26,26,31,47,54,55,34,27,9,0,0,4,17,21,18,19,17,17,22,26,28,27,26,30,37,47,58,58,40,19,0,0,0,3,14,18,20,20,18,17,22,28,33,33,31,33,40,54,65,67,47,11,0,0,1,3,12,18,24,23,18,18,23,25,28,30,33,37,47,61,70,72,52,13,0,0,0,2,15,20,30,26,21,23,23,27,30,33,35,41,55,67,72,71,45,1,0,1,3,1,16,23,37,30,32,30,37,42,42,46,43,46,61,67,70,56,28,1,1,3,5,11,16,21,38,37,35,40,44,54,61,58,61,57,57,63,63,46,10,0,1,6,11,10,20,24,37,36,45,48,61,68,73,79,76,63,62,57,49,28,7,1,1,3,13,15,20,26,45,40,53,60,68,79,83,88,80,70,59,56,47,21,12,1,1,11,7,15,20,25,42,42,41,49,64,75,84,80,73,61,61,55,53,39,18,8,1,0,6,12,22,26,38,40,43,49,44,54,62,66,61,56,51,60,58,43,29,10,1,1,1,4,25,26,45,49,56,53,53,44,41,48,49,46,52,59,61,57,48,30,3,1,1,5,17,23,64,61,56,56,56,44,45,36,42,40,48,62,67,71,55,26,13,6,11,8,13,21,72,69,64,58,52,50,45,42,40,39,48,61,71,68,41,26,13,8,13,13,19,22,63,61,55,47,41,48,46,41,36,38,44,51,56,44,19,2,2,4,7,17,26,33,59,56,53,44,32,31,42,34,34,28,34,28,19,10,4,2,2,9,5,12,24,27,64,57,51,39,41,25,32,26,22,17,12,22,10,10,4,21,25,14,11,5,15,19,61,52,43,41,32,25,11,17,13,13,8,6,8,13,26,26,28,18,10,9,14,15,54,48,39,38,32,29,18,14,15,10,9,9,11,21,33,40,38,21,13,9,9,9,41,44,39,28,19,17,14,13,18,15,14,23,40,30,31,33,32,20,11,8,11,14,36,33,27,26,23,11,21,19,10,14,24,39,44,51,27,21,22,15,9,10,11,14,35,32,28,27,23,11,20,18,10,15,24,39,44,50,26,21,22,14,8,9,11,14],
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
