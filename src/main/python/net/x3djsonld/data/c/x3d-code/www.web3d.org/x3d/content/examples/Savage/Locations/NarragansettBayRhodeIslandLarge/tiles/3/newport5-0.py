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
    GeoLOD(center=(41.64568042259594,-71.74725013871318,0.0),range=12301.135,child1Url=['../../tiles/4/newport10-0.x3d'],child2Url=['../../tiles/4/newport10-1.x3d'],child3Url=['../../tiles/4/newport11-0.x3d'],child4Url=['../../tiles/4/newport11-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport5-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[99,100,135,148,136,128,106,90,86,78,91,134,122,94,68,43,44,47,66,75,78,88,115,118,156,165,154,123,92,113,117,86,112,105,74,48,47,58,59,53,54,60,85,96,135,125,138,159,142,106,107,141,131,100,91,57,54,45,59,68,58,56,70,73,80,98,141,126,121,143,116,107,116,150,135,112,74,51,55,51,57,58,54,61,84,86,86,71,133,125,130,132,114,133,136,143,127,90,61,54,63,91,83,56,57,62,89,100,92,85,146,128,150,172,168,163,159,137,99,67,65,75,96,95,66,62,54,62,98,110,110,101,128,125,144,169,172,162,136,92,84,77,81,105,109,99,61,60,60,68,99,131,134,128,132,129,120,141,128,109,88,105,91,87,102,132,117,87,70,75,70,69,83,119,149,149,139,133,103,98,98,103,111,98,88,106,124,127,115,81,75,108,76,64,63,109,128,131,121,118,106,94,122,123,111,100,110,133,146,139,118,89,110,121,88,75,69,104,127,137,98,101,105,112,116,98,109,109,137,150,155,136,105,92,145,122,75,73,84,104,129,134,99,109,115,120,108,108,108,111,142,152,145,118,97,127,127,101,80,96,115,127,145,141,99,108,110,113,111,110,112,132,146,151,132,131,150,130,135,132,99,137,157,171,163,159,112,108,109,110,107,111,127,139,142,131,131,142,155,161,150,140,123,151,194,194,170,167,102,103,107,113,106,107,117,137,126,135,148,145,139,165,157,144,125,145,176,186,180,174,102,108,109,115,104,104,110,130,132,139,144,140,147,158,150,143,144,131,156,186,174,168,104,105,119,121,124,118,119,143,149,151,139,132,146,140,139,133,131,144,158,181,169,168,112,112,124,124,129,127,134,156,137,126,129,134,138,137,133,131,139,136,138,147,165,166,110,114,120,122,129,125,123,135,127,123,131,142,146,143,135,132,146,143,153,159,181,182,119,127,125,112,112,117,109,111,111,113,127,144,164,162,155,152,147,153,153,170,176,177,136,146,144,123,109,109,106,110,130,129,139,147,161,167,170,167,148,149,157,150,151,154,135,146,143,124,109,109,107,110,131,129,140,148,161,165,169,167,147,149,157,150,151,154],
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
