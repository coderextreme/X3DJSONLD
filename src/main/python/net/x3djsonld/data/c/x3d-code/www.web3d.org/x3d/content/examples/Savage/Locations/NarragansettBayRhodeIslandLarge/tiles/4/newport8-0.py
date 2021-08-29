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
    GeoLOD(center=(41.52473004175595,-71.7692354927566,0.0),range=6150.5674,child1Url=['../../tiles/5/newport16-0.x3d'],child2Url=['../../tiles/5/newport16-1.x3d'],child3Url=['../../tiles/5/newport17-0.x3d'],child4Url=['../../tiles/5/newport17-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport8-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[112,112,113,119,119,126,116,113,116,99,83,75,63,58,60,65,59,50,43,32,27,27,115,112,120,127,127,120,118,115,97,79,72,65,66,70,77,73,62,47,35,32,33,34,108,116,119,123,127,120,112,95,76,66,67,72,80,75,70,67,48,38,33,33,36,38,96,110,113,121,117,110,93,78,70,73,79,73,67,68,62,54,45,36,39,38,41,44,94,101,106,110,110,105,100,90,81,78,76,71,66,62,56,52,53,49,46,46,49,48,110,105,111,114,112,114,103,100,92,90,88,80,70,64,55,51,51,52,57,52,51,55,114,113,111,109,110,108,110,109,106,104,105,101,89,85,76,74,75,67,58,52,57,57,107,110,104,105,97,104,106,99,107,109,109,107,102,97,95,88,81,73,66,60,73,74,120,105,104,98,100,98,105,103,102,102,106,114,112,104,95,89,79,69,64,62,63,65,116,115,116,106,99,97,94,99,99,97,104,117,123,113,103,89,70,60,62,62,69,73,109,110,110,114,110,104,92,92,92,97,93,113,117,114,107,93,82,64,63,62,71,70,111,105,97,104,110,98,97,92,92,92,92,107,109,110,110,100,79,73,69,77,83,85,106,97,97,99,97,97,102,106,99,92,92,92,96,104,101,92,88,79,80,86,87,84,97,97,97,97,97,97,105,109,105,103,92,92,92,92,93,85,85,84,85,82,74,74,98,97,98,97,97,98,109,107,110,109,105,97,97,94,88,83,72,73,74,67,67,68,101,98,104,104,105,107,109,110,112,109,102,97,100,97,93,80,74,69,65,67,65,64,105,109,108,109,113,119,111,117,113,110,107,106,102,93,86,82,79,73,77,76,73,73,119,115,114,115,123,122,122,117,116,115,120,114,103,95,88,87,87,90,93,86,81,78,124,120,120,120,121,120,120,120,117,115,115,110,105,97,95,96,95,93,89,84,70,69,123,126,125,125,121,119,116,117,117,115,113,108,101,98,101,100,101,98,78,64,56,54,125,128,129,127,118,111,103,107,110,115,109,110,107,109,109,104,104,76,57,51,52,54,125,128,129,126,119,111,102,107,110,114,108,109,108,111,108,104,104,74,56,51,52,54],
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
