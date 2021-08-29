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
    GeoLOD(center=(41.86339110810791,-71.46144053614887,0.0),range=6150.5674,child1Url=['../../tiles/5/newport30-14.x3d'],child2Url=['../../tiles/5/newport30-15.x3d'],child3Url=['../../tiles/5/newport31-14.x3d'],child4Url=['../../tiles/5/newport31-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport15-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[58,68,55,53,56,48,35,29,23,20,24,25,25,23,23,21,11,10,10,9,8,8,63,67,63,62,51,44,36,27,28,30,22,26,21,11,11,11,17,21,24,21,6,6,64,65,61,59,54,33,30,23,21,24,22,14,21,21,21,24,31,32,31,27,8,6,63,61,53,45,33,31,28,25,22,29,13,22,26,27,26,32,41,44,40,23,10,7,63,57,41,33,32,31,27,23,27,28,15,32,32,28,30,37,43,45,33,26,25,25,64,52,39,32,33,32,33,30,30,21,31,46,46,41,33,38,44,40,29,27,26,26,56,48,35,33,31,28,19,17,16,16,35,53,51,36,36,40,43,34,28,25,25,25,46,39,34,33,32,25,21,29,29,33,43,53,46,35,33,37,36,28,26,21,21,21,38,35,30,23,19,22,26,27,34,47,54,56,46,37,35,35,31,25,24,21,21,21,39,34,31,22,25,27,27,28,46,56,60,56,46,39,36,36,29,25,27,27,26,28,34,31,27,23,27,31,33,44,47,52,56,56,47,47,35,31,29,30,33,31,33,35,36,30,24,22,32,33,35,39,48,49,54,54,53,55,36,32,34,36,35,38,42,45,29,23,22,25,31,30,32,39,50,58,56,61,61,58,48,37,40,37,36,43,48,49,30,24,24,31,36,35,34,36,47,60,67,68,67,63,56,38,34,38,40,42,50,50,33,28,30,30,33,37,35,39,50,62,69,69,71,68,60,49,32,39,40,40,46,46,28,30,37,40,32,38,39,40,56,69,73,74,77,65,52,39,33,32,31,29,39,39,31,36,40,41,51,47,42,48,63,77,75,79,77,59,63,53,47,37,25,22,25,26,37,39,48,41,46,53,49,53,63,76,78,79,67,63,63,63,48,31,24,36,21,24,52,57,53,45,40,49,58,63,67,75,85,80,64,57,56,54,40,28,32,49,45,43,52,60,58,57,52,41,60,72,71,77,86,80,71,60,45,38,33,35,34,39,45,49,56,60,66,60,60,66,66,73,81,82,80,73,63,48,48,38,39,44,45,46,53,56,57,61,65,63,62,67,66,74,82,82,80,72,62,48,48,38,39,45,45,47,55,58],
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
