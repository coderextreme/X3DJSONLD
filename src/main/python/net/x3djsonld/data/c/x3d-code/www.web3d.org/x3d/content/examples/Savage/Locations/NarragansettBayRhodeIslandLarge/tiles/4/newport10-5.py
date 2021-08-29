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
    GeoLOD(center=(41.62149034642794,-71.5493819523225,0.0),range=6150.5674,child1Url=['../../tiles/5/newport20-10.x3d'],child2Url=['../../tiles/5/newport20-11.x3d'],child3Url=['../../tiles/5/newport21-10.x3d'],child4Url=['../../tiles/5/newport21-11.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport10-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[75,73,73,79,88,102,107,109,111,112,102,89,84,79,74,75,81,82,80,72,72,73,62,72,75,88,94,110,118,120,123,122,110,96,90,79,78,82,87,87,83,77,77,79,68,74,76,89,110,115,123,131,136,109,95,98,86,82,84,87,87,85,82,87,79,82,75,82,95,117,131,130,130,132,112,103,105,97,96,90,87,88,87,87,87,86,83,83,82,93,112,133,140,133,133,119,107,114,116,111,104,93,91,91,97,102,104,96,95,95,91,106,126,141,143,129,125,120,116,114,109,107,101,94,96,105,116,115,114,108,105,106,102,120,137,145,134,121,113,119,116,108,102,98,95,101,106,122,122,127,116,107,104,103,118,131,137,134,127,125,121,118,112,106,100,100,104,113,121,128,129,126,120,111,105,104,128,131,132,128,127,128,135,124,114,106,103,107,119,124,127,131,134,132,124,116,110,107,133,136,129,131,133,132,132,118,107,103,110,125,130,134,135,135,134,125,122,115,106,102,134,137,138,140,141,139,128,117,108,108,119,137,141,136,140,139,130,127,122,113,104,103,122,132,141,140,144,134,129,117,109,107,130,137,136,136,142,139,131,129,121,110,105,105,119,126,131,134,141,134,123,118,109,110,118,128,133,134,140,137,136,128,117,108,110,109,117,118,127,136,139,132,126,118,117,112,113,116,124,134,139,131,128,119,110,109,106,104,127,127,129,140,150,149,140,127,129,129,116,115,117,129,127,123,119,111,102,98,99,99,137,130,138,145,152,153,143,141,133,125,113,109,108,108,108,105,104,96,91,89,91,92,150,147,148,148,149,151,150,134,118,111,104,100,103,96,93,94,90,87,85,84,83,83,143,143,144,145,151,138,137,131,116,107,107,103,97,90,86,86,84,82,83,84,84,82,135,142,146,141,131,123,124,107,113,108,107,103,94,87,89,85,84,83,84,86,85,86,130,141,139,128,115,110,111,114,102,101,96,97,97,87,87,81,85,83,92,85,87,88,123,128,121,108,101,103,103,106,108,103,97,96,93,90,82,84,89,81,91,88,89,86,123,127,120,107,100,103,104,105,107,104,97,96,94,91,83,84,89,81,91,88,89,86],
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
