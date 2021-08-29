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
    GeoLOD(center=(41.62149034642794,-71.7692354927566,0.0),range=6150.5674,child1Url=['../../tiles/5/newport20-0.x3d'],child2Url=['../../tiles/5/newport20-1.x3d'],child3Url=['../../tiles/5/newport21-0.x3d'],child4Url=['../../tiles/5/newport21-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport10-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[112,103,101,119,141,147,153,150,141,136,127,115,103,94,91,92,85,84,79,76,94,100,111,106,113,131,154,157,158,158,149,139,129,111,97,91,103,106,103,89,80,83,108,115,118,117,120,143,157,160,164,161,153,138,120,107,94,101,122,128,121,100,89,95,112,113,129,123,125,137,147,156,161,162,146,131,113,99,102,117,135,136,128,109,94,104,101,98,138,130,129,128,135,149,160,153,137,118,102,107,111,125,144,144,131,114,106,102,90,84,147,136,128,121,129,148,148,140,119,108,106,109,111,133,150,148,134,124,113,97,77,73,138,126,119,120,120,134,136,123,118,112,111,118,119,141,153,143,131,124,108,87,72,65,129,124,119,120,120,122,122,121,112,111,125,128,128,141,149,131,127,117,99,76,59,60,140,138,126,129,135,142,139,131,118,131,139,140,143,147,145,132,128,107,82,61,63,63,144,136,127,131,149,157,163,151,148,156,157,157,158,154,141,133,115,91,64,66,68,66,143,136,128,131,147,170,167,170,174,173,168,163,158,142,131,112,89,70,67,63,67,69,129,130,127,129,146,166,172,175,178,171,167,162,149,128,107,84,76,73,74,77,85,78,127,128,124,127,143,158,167,170,168,168,157,146,128,107,86,82,87,89,79,83,86,87,130,129,123,127,126,144,158,159,155,144,134,115,100,94,92,101,95,81,85,89,98,103,135,133,134,124,119,124,128,119,110,106,96,87,89,98,114,106,86,78,89,94,100,101,138,139,135,127,112,98,95,98,94,92,90,94,109,111,110,92,83,90,94,98,107,114,140,136,131,116,98,97,99,100,107,108,112,121,113,110,99,88,91,105,112,119,131,133,130,123,123,116,104,97,95,104,114,124,127,119,114,108,100,93,102,116,127,144,143,142,115,111,112,106,105,97,96,115,129,130,117,112,109,103,102,104,117,126,145,150,150,147,97,98,98,101,106,101,105,117,123,118,100,96,109,110,107,115,128,142,148,153,154,153,98,106,106,109,110,110,114,115,112,99,99,99,110,113,107,121,138,151,150,157,154,154,98,108,106,109,111,111,114,115,112,99,99,101,109,112,107,122,138,151,150,158,154,154],
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
