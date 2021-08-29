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
    GeoLOD(center=(41.839201031939915,-71.48342589019228,0.0),range=12301.135,child1Url=['../../tiles/4/newport14-6.x3d'],child2Url=['../../tiles/4/newport14-7.x3d'],child3Url=['../../tiles/4/newport15-6.x3d'],child4Url=['../../tiles/4/newport15-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport7-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[118,117,113,111,103,89,75,84,81,75,65,25,21,30,49,50,25,10,8,7,16,16,141,128,121,115,108,86,80,70,68,69,62,30,30,30,37,44,22,13,16,7,17,18,133,128,115,105,92,90,80,69,70,56,45,40,31,26,26,27,14,11,22,21,19,18,132,118,109,110,113,105,79,70,63,52,54,63,45,19,23,24,21,17,23,23,21,18,115,108,103,95,95,96,94,81,55,50,66,43,41,24,21,25,17,21,24,17,13,19,123,111,95,86,86,103,92,60,47,40,52,32,28,24,24,26,22,24,18,20,12,14,103,92,93,105,88,76,62,81,53,47,23,24,29,21,18,25,20,46,37,22,21,20,88,92,109,107,100,103,90,73,57,45,22,30,36,54,22,27,21,50,44,21,22,21,103,108,107,106,103,92,66,58,35,30,35,42,54,82,66,24,25,37,29,25,17,21,107,102,95,83,72,96,84,52,33,33,41,51,50,63,71,28,28,27,25,15,10,16,104,86,86,87,93,107,54,37,37,55,52,54,56,49,26,27,26,21,12,8,7,6,98,109,107,83,79,46,42,41,50,64,65,63,52,33,23,20,13,12,23,28,5,5,129,118,74,55,54,45,50,50,56,64,62,46,32,27,25,14,28,26,42,41,22,7,111,85,76,62,56,76,69,67,62,60,63,36,33,33,22,34,54,35,44,29,26,26,82,82,71,81,74,104,92,57,58,55,43,34,34,21,32,49,48,33,33,27,21,22,100,75,102,79,90,97,82,62,58,56,36,32,26,33,45,59,47,38,28,29,29,33,83,111,109,80,83,87,76,73,60,42,36,22,26,32,44,54,55,41,38,35,45,49,101,95,100,85,83,80,82,72,55,51,33,25,35,35,46,68,69,61,33,42,49,47,101,94,97,84,89,86,84,76,74,41,29,39,38,42,59,74,78,55,40,27,33,29,89,98,102,82,82,92,98,87,59,36,48,43,44,54,65,81,67,62,45,28,37,38,100,112,108,84,101,100,83,57,43,35,52,57,57,51,74,85,69,42,36,39,47,54,99,112,110,82,102,99,80,56,42,35,53,57,58,51,75,84,68,43,37,40,47,55],
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
