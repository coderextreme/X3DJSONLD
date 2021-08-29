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
    GeoLOD(center=(41.669870498763935,-71.5493819523225,0.0),range=6150.5674,child1Url=['../../tiles/5/newport22-10.x3d'],child2Url=['../../tiles/5/newport22-11.x3d'],child3Url=['../../tiles/5/newport23-10.x3d'],child4Url=['../../tiles/5/newport23-11.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport11-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[123,127,120,107,100,103,104,105,107,104,97,96,94,91,83,84,89,81,91,88,89,86,116,107,93,91,100,108,99,99,108,99,97,95,93,92,100,96,85,82,90,88,87,85,94,88,88,90,105,114,104,99,99,103,100,97,100,98,98,103,97,93,91,89,84,80,95,93,88,92,107,119,118,99,99,102,106,110,114,112,107,99,94,91,87,83,79,76,97,100,91,88,110,124,135,115,99,105,114,120,116,112,111,97,90,90,84,83,78,76,90,97,105,90,106,121,126,124,109,114,120,124,123,118,111,107,96,87,83,84,75,74,100,95,94,99,99,109,123,127,124,122,126,127,124,119,112,103,96,96,87,79,74,74,103,103,101,98,93,99,115,124,126,128,128,124,118,114,105,101,95,91,84,80,75,77,95,99,100,97,93,94,103,113,121,130,133,122,115,105,100,99,100,90,84,82,79,78,93,93,97,101,101,93,100,104,108,119,127,117,109,107,99,92,88,84,85,83,83,81,96,95,96,97,103,99,95,97,101,103,113,118,115,112,100,94,91,86,84,86,81,83,103,105,99,103,103,102,97,97,97,101,105,113,120,114,105,96,95,93,90,87,85,88,99,101,103,105,106,106,97,101,101,100,104,109,112,117,113,100,94,88,87,86,84,86,100,99,99,99,103,106,103,100,101,103,105,108,103,103,104,102,99,94,90,88,91,93,100,102,100,90,89,91,96,101,101,106,108,104,103,104,100,92,102,101,96,91,88,88,99,101,106,92,84,94,87,85,89,91,103,84,88,94,96,86,91,101,103,94,84,82,94,95,95,92,87,83,86,81,89,80,77,75,74,74,71,72,78,77,79,82,83,82,95,88,85,85,79,82,86,84,78,72,71,69,70,69,76,73,71,75,73,78,77,78,90,82,81,77,80,83,80,80,75,72,69,69,69,69,72,71,62,65,72,77,80,77,83,82,74,76,80,72,77,77,73,69,69,69,69,71,78,82,70,54,52,52,53,57,73,72,72,74,76,74,70,69,69,69,69,69,69,77,76,68,61,57,54,49,48,48,72,72,72,74,77,74,70,69,69,69,69,69,69,77,75,69,61,58,56,50,48,48],
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
