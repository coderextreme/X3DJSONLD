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
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/Malacca1-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.8445483343071585,98.7885625,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[9,6,0,0,0,0,1,-1,0,0,11,5,34,26,29,33,36,56,176,127,425,581,7,7,1,0,3,1,2,0,0,-1,6,16,13,36,45,25,30,153,221,305,506,869,3,9,3,0,2,3,1,1,3,1,12,21,25,33,25,25,28,60,390,212,297,656,0,5,3,1,1,2,3,4,1,1,25,20,24,19,24,25,87,59,171,121,167,297,2,4,5,0,0,6,5,3,1,6,29,30,26,30,28,73,83,141,219,116,134,428,1,5,5,0,4,3,6,6,5,6,31,31,98,34,28,25,49,124,186,164,241,362,2,5,1,1,1,4,4,7,7,0,27,29,29,28,32,40,137,137,119,410,279,276,3,0,5,0,0,0,2,2,9,27,31,105,31,32,80,74,178,58,274,251,237,164,2,2,4,3,0,0,1,3,7,24,31,28,29,54,37,34,47,234,245,233,192,151,3,3,5,4,2,1,1,1,3,34,37,25,42,67,37,39,107,274,196,120,113,97,1,0,4,5,2,2,2,1,4,33,34,30,111,106,68,27,253,288,194,139,73,37,3,3,2,3,1,2,2,5,11,40,36,39,302,37,84,311,225,135,213,122,17,18,3,3,3,0,3,3,5,2,12,45,32,38,243,92,37,47,109,231,172,38,32,36,3,0,2,1,1,4,9,0,22,31,25,43,147,51,115,202,229,200,142,34,39,44,5,2,1,2,0,3,4,8,11,18,16,26,100,58,183,232,192,185,85,45,48,230,1,2,1,0,6,0,7,5,9,30,28,15,113,210,259,176,228,151,40,47,52,68,2,4,1,3,1,1,6,28,31,44,26,45,73,65,296,208,161,50,41,44,49,45,-3,4,2,3,3,3,5,30,23,30,19,92,173,149,228,229,111,31,38,35,38,49,1,3,2,4,5,7,5,7,33,20,54,117,170,168,22,168,26,33,43,48,46,50,0,0,5,4,6,13,6,25,28,90,166,112,148,204,57,86,34,41,45,45,45,162,2,0,3,1,4,-3,6,45,25,19,150,213,154,182,40,40,41,41,40,49,78,409,0,4,0,0,3,0,6,25,9,22,14,215,235,158,60,17,35,34,31,43,528,507,2,3,0,1,2,-5,8,23,9,27,14,208,230,154,45,15,30,35,31,41,537,543],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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
