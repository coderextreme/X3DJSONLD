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
    GeoLOD(center=(41.64568042259594,-71.57136730636591,0.0),range=12301.135,child1Url=['../../tiles/4/newport10-4.x3d'],child2Url=['../../tiles/4/newport10-5.x3d'],child3Url=['../../tiles/4/newport11-4.x3d'],child4Url=['../../tiles/4/newport11-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport5-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[129,125,136,125,131,122,112,96,108,93,74,69,82,108,107,98,80,72,87,79,72,71,118,117,130,145,144,122,109,105,98,77,64,75,103,122,131,101,88,81,91,81,84,85,125,114,128,150,151,133,123,101,82,74,76,107,138,133,105,112,104,89,90,96,92,91,121,119,128,141,139,110,94,84,70,74,97,136,138,111,114,105,94,105,123,117,104,105,112,116,124,125,128,100,80,76,76,89,122,136,124,130,115,103,109,125,135,124,109,106,110,113,115,113,125,92,82,77,92,119,137,137,137,130,109,113,140,137,132,124,104,99,108,122,115,117,117,98,81,92,93,102,123,134,144,125,107,122,132,141,139,120,108,109,97,118,115,120,114,104,97,94,90,118,122,125,145,135,124,115,120,133,124,108,102,102,106,116,111,97,98,101,124,111,125,153,149,144,148,152,123,108,104,101,92,90,83,86,90,108,101,92,89,96,95,107,107,121,139,144,141,125,118,106,95,87,86,83,85,84,92,101,94,82,93,93,91,99,96,100,124,130,106,103,109,97,91,82,85,91,88,87,75,83,81,84,100,87,97,92,79,82,107,88,103,100,99,99,94,97,96,92,85,77,76,84,79,83,99,85,87,79,79,87,102,90,109,129,99,109,115,105,92,86,78,76,82,76,78,82,78,89,78,88,99,105,90,97,97,124,119,124,125,113,103,84,75,75,80,88,93,83,88,84,86,92,93,87,103,102,93,107,124,131,117,102,96,84,79,77,83,114,102,78,82,76,76,88,101,104,98,96,102,94,103,119,111,103,87,81,81,81,118,117,94,83,78,77,76,78,99,95,101,104,105,97,97,104,118,108,94,89,84,89,100,93,79,78,75,76,75,75,82,97,100,103,92,100,100,105,103,100,100,93,95,90,79,79,75,75,75,75,75,75,75,91,96,101,88,90,94,87,82,89,85,85,85,81,79,76,76,78,77,75,75,75,75,85,94,80,77,80,82,69,70,78,66,73,84,72,85,84,75,81,78,80,81,74,76,84,83,73,77,71,70,69,69,81,66,50,51,48,85,84,75,81,78,80,82,74,76,84,82,73,76,70,70,69,69,81,65,51,50,48],
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
