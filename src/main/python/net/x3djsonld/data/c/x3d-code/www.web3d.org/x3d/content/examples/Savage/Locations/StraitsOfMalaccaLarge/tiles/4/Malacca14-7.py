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
        texture=ImageTexture(url=['../../images/4/Malacca14-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(6.391418833468429,99.88675033605634,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[139,272,2,1,0,2,4,5,5,5,29,22,99,70,43,108,36,147,276,154,198,212,6,1,1,0,0,2,3,6,5,6,31,22,57,399,114,112,97,209,404,286,506,509,14,0,0,0,2,3,4,5,10,42,107,35,61,338,339,249,97,190,285,508,119,126,0,0,1,1,6,6,7,7,10,36,61,38,59,209,297,416,149,115,136,249,363,316,0,1,1,1,2,8,26,17,21,68,48,92,92,112,277,469,97,143,127,61,149,154,1,4,1,6,6,9,430,25,35,47,61,86,61,82,283,400,106,195,271,84,94,43,3,2,7,6,6,5,308,42,84,70,51,59,51,114,199,111,71,92,160,92,48,51,2,0,6,43,14,14,328,76,54,65,66,35,80,150,224,93,46,60,111,81,35,29,2,8,7,115,16,168,413,236,161,57,40,36,40,244,138,60,33,55,90,88,44,128,7,8,26,28,26,132,407,457,175,64,48,28,51,66,191,81,32,26,58,221,48,57,24,27,20,22,46,55,158,237,367,54,39,41,49,54,81,40,21,18,26,83,288,39,42,40,46,38,73,61,353,514,142,53,28,21,24,248,373,80,46,15,146,20,15,7,25,37,45,66,153,143,525,606,66,39,19,19,37,68,102,284,37,7,5,28,30,64,51,41,211,69,510,101,549,824,48,27,19,22,18,31,35,105,14,6,5,3,0,-3,70,46,172,137,458,171,228,368,57,84,50,10,13,229,53,221,6,7,0,16,5,0,69,210,147,230,449,91,71,42,32,58,41,2,13,19,14,124,7,8,2,8,2,0,201,153,247,465,439,106,62,38,26,21,17,3,3,11,12,53,3,6,6,10,9,3,326,367,301,641,157,74,43,31,23,52,9,3,2,3,3,14,3,6,6,5,4,4,295,313,501,429,75,56,52,26,29,14,8,3,4,1,16,4,3,1,3,6,6,5,280,470,457,127,54,39,49,48,22,5,8,4,5,9,1,4,1,3,4,7,4,6,456,913,211,62,34,56,34,29,27,47,5,6,6,1,1,2,3,2,2,1,2,0,395,887,148,61,33,63,32,33,20,42,5,3,5,2,2,2,3,2,5,1,1,3],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])))])
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
