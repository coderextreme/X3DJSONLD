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
        texture=ImageTexture(url=['../../images/4/Malacca8-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.070985940057265,101.29356261898111,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[-1,6,8,6,1,4,3,5,13,10,8,10,9,8,19,27,13,55,36,42,45,43,-1,2,-3,0,5,3,4,5,7,13,10,17,41,19,29,33,-1,17,20,52,57,58,1,1,0,4,5,8,4,9,13,20,36,22,29,7,37,31,24,21,28,18,72,108,0,-3,-2,6,4,6,8,9,15,49,44,72,37,8,32,28,43,45,45,47,48,31,0,0,6,4,6,12,11,5,7,42,121,85,21,20,11,25,41,45,37,42,59,32,0,0,6,8,4,6,8,10,8,20,117,110,46,15,24,59,36,43,46,66,35,67,0,1,3,8,5,12,5,12,11,28,157,46,28,17,26,47,49,61,85,103,65,41,0,3,2,10,7,8,9,9,9,12,107,57,30,43,29,37,53,61,80,116,72,32,2,4,8,9,3,10,12,18,32,106,57,47,34,28,38,82,175,125,79,75,38,50,0,3,7,10,14,12,23,17,46,89,97,70,23,27,32,43,77,93,82,43,41,61,1,5,8,11,11,11,8,60,73,22,28,38,29,29,34,79,86,72,47,44,38,52,0,5,6,4,4,14,32,75,19,22,17,43,38,69,40,63,178,68,56,50,49,48,0,3,7,10,45,39,47,29,21,25,21,50,36,60,81,137,219,98,80,55,59,59,0,24,12,11,9,11,56,78,10,15,57,43,37,48,72,420,509,367,69,66,61,138,3,5,4,9,9,7,13,32,19,46,56,25,26,46,51,89,375,158,116,113,131,235,3,3,10,10,9,11,10,50,27,45,36,27,43,43,81,115,324,352,123,389,111,333,4,6,8,6,7,9,9,12,81,29,24,24,92,45,122,58,125,78,193,303,156,325,8,11,13,13,10,11,10,13,44,40,39,19,75,38,54,38,244,378,197,457,389,250,8,12,5,11,10,11,8,11,65,41,62,83,31,55,-35,150,403,703,315,509,539,244,5,8,9,8,10,8,10,12,48,46,74,16,35,68,25,40,171,428,500,431,588,268,8,14,10,3,12,11,13,9,37,35,56,21,51,100,26,69,48,104,174,477,298,381,8,10,12,4,7,16,18,15,39,35,24,50,50,65,44,57,38,154,281,500,284,561,9,11,13,4,8,13,15,14,32,31,43,43,44,68,47,59,36,143,311,499,385,549],
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
