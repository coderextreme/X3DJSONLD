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
    GeoViewpoint(description='GeoViewpoint_3_44',geoSystem=['GDC'],position=(41.11691829101653,29.10513432121479,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.11691829101653,29.10513432121479,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus8-8.x3d'],child2Url=['../../tiles/4/bosphorus8-9.x3d'],child3Url=['../../tiles/4/bosphorus9-8.x3d'],child4Url=['../../tiles/4/bosphorus9-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus4-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,29.030952729968703,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[7,34,-1,1,29,80,122,88,68,128,137,89,130,117,122,100,145,166,165,185,202,200,69,8,-2,2,58,80,110,97,47,93,92,75,136,140,94,109,118,139,210,232,249,266,90,8,1,4,46,123,114,90,62,107,126,148,129,116,101,90,128,185,202,246,273,252,113,85,20,0,97,131,89,28,54,95,137,145,117,98,102,106,159,178,216,218,182,205,148,98,18,0,43,104,25,88,41,45,121,117,130,76,97,127,145,167,167,179,149,156,133,116,8,8,4,54,36,8,76,23,28,51,91,102,114,125,123,166,176,115,149,159,137,131,44,8,0,2,8,16,104,114,52,83,112,89,101,76,85,92,113,175,173,176,108,111,111,86,7,3,89,91,48,98,106,88,136,97,98,111,135,125,131,138,205,219,76,77,66,75,46,19,104,106,87,101,151,147,150,140,110,85,140,169,160,142,179,195,47,82,61,23,-2,12,84,93,117,121,126,190,231,249,152,145,94,162,146,176,190,198,79,34,21,52,-1,2,67,64,56,59,59,109,145,240,181,150,136,107,125,185,186,188,115,81,81,62,1,0,35,38,38,26,31,64,66,127,224,204,171,134,175,171,152,157,135,116,103,55,5,6,4,-4,68,69,101,108,144,97,124,189,179,146,170,184,164,150,74,72,65,19,47,-1,4,-2,6,4,42,62,140,194,166,162,212,169,191,150,126,139,97,61,20,36,70,59,6,0,8,-23,37,39,158,181,192,260,249,185,183,225,189,175,78,46,102,92,84,56,15,0,-5,-1,35,158,242,254,282,232,285,229,154,140,146,135,93,65,71,76,48,0,4,-5,0,31,107,145,151,116,181,200,215,215,182,166,146,116,93,122,73,20,5,-1,0,17,26,61,62,76,84,140,143,169,191,174,157,131,148,127,113,69,72,42,16,2,8,28,23,118,37,143,108,68,164,180,201,161,134,161,124,148,70,122,52,2,5,1,-2,83,15,46,29,30,106,109,134,227,240,221,206,133,114,127,6,6,3,-1,-6,2,0,73,63,26,126,124,53,107,107,146,150,174,132,167,130,106,4,5,3,-3,-2,1,0,71,70,25,123,120,53,108,115,149,142,166,124,161,127,107],
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
