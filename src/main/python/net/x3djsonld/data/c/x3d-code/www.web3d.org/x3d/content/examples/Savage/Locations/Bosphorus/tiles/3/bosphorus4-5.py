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
    GeoViewpoint(description='GeoViewpoint_3_45',geoSystem=['GDC'],position=(41.11691829101653,29.253497503706967,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.11691829101653,29.253497503706967,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus8-10.x3d'],child2Url=['../../tiles/4/bosphorus8-11.x3d'],child3Url=['../../tiles/4/bosphorus9-10.x3d'],child4Url=['../../tiles/4/bosphorus9-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus4-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,29.17931591246088,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[200,184,205,240,291,283,199,194,165,162,189,166,185,156,193,232,274,294,263,179,144,128,266,219,230,233,268,291,239,201,162,150,166,155,181,149,165,203,260,231,197,146,133,160,252,210,227,243,291,306,242,196,189,180,179,142,165,141,156,186,211,214,155,125,92,111,205,197,177,239,345,354,252,224,223,223,205,180,117,137,210,194,181,201,179,153,57,55,156,153,204,230,389,294,228,197,202,220,207,178,135,133,192,196,155,156,174,119,79,69,159,189,203,268,397,270,224,221,170,178,204,182,150,118,176,174,138,124,148,87,56,51,176,237,274,225,363,215,186,203,194,177,191,178,165,115,95,143,123,83,129,103,81,63,219,231,214,232,331,219,218,140,180,166,162,115,160,154,101,123,140,69,51,53,39,27,195,221,203,200,259,230,183,152,157,111,123,103,91,143,48,102,123,94,62,29,15,15,198,135,193,209,280,227,178,161,105,91,91,72,56,68,48,93,65,31,28,13,12,14,188,146,172,225,260,161,159,156,118,75,66,85,70,37,25,54,21,11,10,13,14,16,157,124,162,205,174,133,139,125,109,120,54,112,104,54,47,64,22,13,11,21,85,129,150,160,186,152,176,151,113,123,153,140,60,104,63,56,32,27,11,11,22,110,129,124,139,109,228,151,115,138,119,74,131,111,83,39,35,56,36,16,14,12,41,82,47,48,175,85,158,162,130,102,104,118,69,101,60,60,69,37,10,14,58,14,31,115,115,120,135,102,117,119,166,143,110,86,124,83,50,26,24,9,9,33,15,56,99,79,56,47,116,76,101,141,149,113,138,97,105,75,62,38,23,8,9,28,46,13,23,24,107,117,127,84,132,137,127,145,155,149,141,111,81,63,39,12,114,14,12,16,30,77,80,71,148,108,69,76,101,100,91,78,60,104,71,19,3,132,123,37,71,77,90,98,97,122,127,84,113,106,126,125,115,155,145,174,141,5,76,77,105,130,140,158,90,129,132,147,106,89,40,97,105,174,180,156,152,118,66,113,13,38,62,122,135,155,156,149,152,146,107,91,47,112,111,179,183,158,149,130,83,112,17,33,61,111,139,154,153,145,151,146],
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
