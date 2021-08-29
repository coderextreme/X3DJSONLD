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
    GeoLOD(center=(41.81501095577192,-71.50541124423569,0.0),range=6150.5674,child1Url=['../../tiles/5/newport28-12.x3d'],child2Url=['../../tiles/5/newport28-13.x3d'],child3Url=['../../tiles/5/newport29-12.x3d'],child4Url=['../../tiles/5/newport29-13.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport14-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[127,122,117,118,110,112,111,108,108,100,92,84,75,73,74,77,81,89,81,69,82,79,138,132,126,119,119,114,115,113,110,105,87,79,76,75,72,77,76,81,71,82,65,60,139,135,125,125,118,114,115,114,112,93,94,83,82,75,71,69,67,66,65,63,62,61,135,134,129,122,119,111,110,104,95,89,91,89,80,73,71,69,68,67,67,62,53,48,135,130,128,118,112,120,104,101,96,99,105,93,83,78,72,70,70,59,63,57,49,47,135,126,121,113,113,115,108,107,110,114,115,100,77,77,73,71,64,61,55,53,50,51,118,121,114,114,106,106,106,104,108,108,99,81,86,85,71,72,65,59,53,50,52,54,115,116,113,106,104,101,102,96,94,91,92,97,92,87,81,68,58,54,52,54,63,65,117,117,113,107,104,97,90,92,90,91,99,107,98,94,83,70,57,47,49,52,66,67,124,123,116,105,101,97,86,86,86,94,99,107,100,87,71,68,50,45,43,50,59,60,117,116,111,102,92,86,89,91,87,85,97,93,85,71,58,58,50,44,39,35,36,36,109,100,95,92,88,99,97,103,96,87,82,77,67,58,62,71,58,50,42,31,29,27,102,95,88,88,99,112,111,102,96,89,82,73,63,64,73,67,50,56,54,33,23,22,90,90,88,93,103,112,112,108,100,95,97,88,83,76,72,61,57,59,52,35,26,23,89,96,92,101,109,109,111,110,110,107,104,105,92,85,73,58,54,58,40,29,30,29,93,95,107,109,112,110,105,105,115,106,104,90,80,69,60,50,38,32,29,30,34,38,107,112,111,110,104,104,101,94,97,97,79,66,72,79,62,44,34,31,30,35,41,43,107,109,110,101,96,96,89,85,81,74,83,91,88,81,60,40,32,31,34,32,37,40,107,103,100,89,86,79,80,80,76,88,105,103,87,66,49,40,33,37,42,36,45,47,101,95,87,86,86,87,85,77,92,103,106,99,71,45,42,37,36,36,41,48,48,49,93,91,86,89,86,93,92,92,89,101,94,72,44,37,39,35,38,45,66,68,57,56,93,87,86,91,87,94,92,93,90,99,92,68,44,37,39,36,38,47,66,68,58,58],
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
