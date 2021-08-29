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
        texture=ImageTexture(url=['../../images/4/Malacca10-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.361918642077449,102.91900048008048,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[244,29,49,38,53,80,112,92,140,57,28,56,56,33,12,58,35,41,58,19,48,45,26,21,52,55,100,313,562,201,60,202,91,64,21,27,11,31,27,18,31,12,13,2,16,39,67,65,302,627,206,462,235,362,147,64,43,15,17,9,19,24,10,11,2,3,37,50,62,77,282,613,527,325,515,462,347,64,32,26,20,145,19,54,39,1,3,2,47,52,67,94,291,728,196,151,629,113,584,37,30,23,32,16,19,57,12,3,1,2,48,56,63,127,291,483,329,150,296,45,459,244,36,28,18,9,36,33,137,3,2,2,71,56,102,162,138,380,376,192,213,362,91,22,11,8,5,19,42,17,3,4,3,2,64,65,90,145,116,335,647,376,74,68,57,59,12,6,3,4,4,4,4,3,1,3,79,60,109,102,115,258,72,426,96,62,19,32,34,9,3,4,3,3,4,3,3,3,63,79,68,82,85,336,296,181,34,27,34,13,10,6,4,3,3,4,3,4,5,5,61,66,59,79,324,119,111,52,32,12,27,10,3,3,6,6,4,3,4,4,2,3,73,72,83,37,91,37,26,12,24,10,15,11,5,4,3,4,7,5,4,3,3,4,41,83,70,33,32,33,12,47,11,24,11,4,5,5,5,5,5,4,6,5,3,3,45,49,57,16,31,41,46,34,17,18,11,5,5,4,4,5,5,4,3,5,7,6,66,39,40,33,55,44,66,32,33,36,4,3,4,5,4,3,5,4,4,5,5,5,47,19,35,16,34,46,17,28,34,27,22,6,4,3,5,4,5,4,4,3,4,4,63,59,43,78,24,34,38,34,29,11,12,6,6,5,3,4,4,4,4,3,4,4,73,244,213,35,58,68,46,31,34,14,21,4,5,5,6,4,3,4,6,4,4,3,46,152,87,38,73,26,10,4,33,10,23,4,3,5,5,5,6,4,3,5,5,5,65,77,60,62,96,52,29,16,31,21,8,6,5,4,4,5,6,6,5,3,5,3,43,105,40,100,32,96,30,31,31,20,9,5,5,5,5,4,5,6,5,7,4,4,48,118,38,99,47,73,30,31,31,23,10,4,6,4,4,4,5,5,4,6,5,6],
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
