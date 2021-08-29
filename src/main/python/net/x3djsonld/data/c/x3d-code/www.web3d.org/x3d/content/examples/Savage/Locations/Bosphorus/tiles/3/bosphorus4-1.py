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
    GeoViewpoint(description='GeoViewpoint_3_41',geoSystem=['GDC'],position=(41.11691829101653,28.660044773738264,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.11691829101653,28.660044773738264,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus8-2.x3d'],child2Url=['../../tiles/4/bosphorus8-3.x3d'],child3Url=['../../tiles/4/bosphorus9-2.x3d'],child4Url=['../../tiles/4/bosphorus9-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus4-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,28.585863182492176,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[3,37,42,69,121,151,177,172,111,108,71,101,135,99,81,27,6,9,19,25,6,-1,4,23,71,90,104,163,180,143,111,114,95,118,125,87,50,11,7,15,30,41,39,4,7,19,46,78,123,171,164,141,136,91,115,133,137,95,58,42,18,39,53,59,27,23,14,27,54,83,129,182,178,144,107,95,133,151,150,122,91,53,26,69,82,93,79,56,32,21,57,102,156,176,144,122,135,121,127,156,143,82,29,23,63,89,101,114,130,124,68,35,36,73,114,172,145,166,141,147,145,157,94,96,62,88,96,111,119,136,64,34,81,77,67,54,88,139,163,175,145,156,138,86,102,38,62,138,77,119,136,67,16,4,67,110,99,102,85,130,177,165,159,151,150,84,43,39,102,141,115,134,128,21,3,1,47,88,112,138,152,161,168,170,171,166,135,72,28,110,112,139,116,116,58,21,13,57,34,55,74,102,155,176,136,179,175,176,140,68,78,120,98,157,140,95,53,5,38,33,69,52,76,107,158,131,165,176,172,145,122,41,91,135,109,156,147,130,36,4,44,80,83,70,104,140,166,104,146,146,130,100,60,95,132,134,163,159,104,69,17,34,72,101,102,101,138,159,157,108,166,134,73,75,73,108,155,161,130,86,75,17,18,18,44,53,110,133,149,109,70,123,162,121,69,111,92,116,176,148,55,31,16,20,16,21,18,38,91,118,125,120,80,134,152,92,79,136,111,159,132,72,42,20,19,45,52,45,19,24,45,93,65,59,81,141,125,86,80,143,135,164,101,40,12,18,42,78,67,89,64,21,19,24,30,57,80,154,133,95,91,128,167,145,81,32,18,43,78,144,93,150,97,24,48,37,57,69,113,158,157,82,111,151,103,114,49,17,41,43,78,134,133,158,99,66,78,51,69,60,109,168,120,76,127,121,51,49,12,19,41,57,87,145,162,109,88,98,96,62,71,99,109,159,118,88,142,110,75,20,20,47,50,90,98,125,161,148,106,115,114,70,81,130,147,126,79,123,120,78,61,14,44,80,53,112,126,121,141,86,83,96,115,72,83,131,150,122,79,125,115,73,57,14,45,82,53,112,129,119,139,84,80,92],
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
