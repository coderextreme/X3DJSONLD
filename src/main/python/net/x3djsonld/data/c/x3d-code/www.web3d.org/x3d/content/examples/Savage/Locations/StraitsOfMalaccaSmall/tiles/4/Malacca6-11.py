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
        texture=ImageTexture(url=['../../images/4/Malacca6-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.434860909842949,103.38106271813204,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[253,187,162,98,59,34,27,25,26,24,35,26,24,25,10,14,44,15,11,14,19,33,175,365,244,57,53,56,99,23,20,13,19,23,17,19,40,18,38,29,39,29,100,5,518,441,227,261,80,80,37,55,31,25,20,20,16,19,112,48,29,23,32,49,24,35,504,446,426,188,40,64,34,42,33,27,27,19,19,12,54,20,19,57,54,65,49,50,269,520,338,305,32,29,30,27,26,32,19,17,14,19,24,20,13,14,36,53,59,62,174,273,114,124,23,41,30,29,29,32,21,33,31,8,11,19,18,20,33,42,89,38,163,462,542,375,44,42,43,33,29,23,81,31,31,13,15,14,11,34,56,74,28,43,106,130,104,23,45,407,249,42,25,30,25,11,23,14,20,22,23,40,43,52,58,6,214,34,28,41,48,191,131,39,40,34,30,29,20,17,22,24,50,72,64,42,31,9,203,516,433,325,272,56,37,34,29,29,33,23,19,23,7,9,35,44,59,33,35,24,388,325,251,146,61,36,29,27,28,14,11,15,24,19,5,27,23,37,61,48,27,26,187,244,80,28,50,20,15,12,8,6,10,12,10,12,6,32,47,8,21,11,31,12,331,237,82,128,43,38,22,12,8,7,8,5,12,6,10,34,22,8,7,20,11,5,400,90,90,25,26,37,30,23,8,8,7,6,5,8,31,25,19,9,7,69,2,2,44,66,22,33,44,37,31,11,7,7,6,13,17,8,11,23,15,11,2,56,5,4,66,43,53,38,67,42,23,9,21,6,4,11,13,7,6,23,5,7,3,7,4,5,43,43,50,42,50,62,15,11,21,5,5,9,6,4,7,3,5,4,3,26,11,4,39,26,39,31,59,48,24,13,9,13,4,8,9,4,4,1,5,2,1,4,4,5,25,28,30,48,39,29,15,27,12,9,11,7,3,3,6,3,4,4,2,5,4,5,25,26,114,53,38,24,29,26,17,9,5,5,1,4,4,2,4,2,4,3,2,6,32,8,9,23,23,12,5,6,10,7,10,3,3,2,4,3,2,4,3,3,3,4,20,29,13,5,16,7,3,6,6,10,3,4,3,2,3,3,3,3,3,2,2,4,20,29,23,7,12,6,3,6,6,9,4,6,3,3,3,3,4,3,2,2,2,3],
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
