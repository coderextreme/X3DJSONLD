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
        texture=ImageTexture(url=['../../images/4/Malacca14-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.979361030700214,102.96356269830186,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[83,32,42,174,31,46,60,211,110,247,35,33,14,25,9,25,38,23,8,12,6,6,78,36,54,60,61,35,59,204,319,127,31,32,27,24,59,10,18,23,20,7,6,6,217,27,35,37,45,25,52,110,328,131,24,31,25,20,26,21,35,16,4,4,6,5,228,24,24,48,36,31,23,334,277,30,22,30,25,17,26,47,115,28,5,6,3,5,48,27,33,40,33,25,40,230,373,29,43,28,25,18,28,67,17,4,7,4,4,5,59,24,34,33,26,40,50,39,92,25,34,13,31,23,22,39,5,21,5,5,5,6,50,28,20,21,25,23,33,57,45,21,11,14,49,24,19,17,15,5,3,5,5,6,25,24,15,19,52,34,38,36,21,18,17,23,21,23,56,17,19,6,3,4,4,6,20,25,21,21,19,14,37,20,19,18,7,173,36,103,52,24,12,6,5,4,5,4,19,24,14,26,18,27,43,16,20,19,12,5,6,72,12,6,9,6,6,6,5,4,32,43,21,15,63,31,31,31,21,11,17,13,10,33,9,42,2,7,7,7,5,5,27,40,15,19,25,30,27,12,18,22,4,24,50,4,9,18,2,7,4,8,5,6,40,38,20,23,23,17,29,13,23,25,10,49,8,11,13,7,7,7,5,5,6,7,24,31,33,18,15,92,37,27,17,20,22,12,6,14,12,6,5,7,6,7,8,7,28,21,14,14,18,22,23,20,32,292,168,9,10,29,9,5,4,7,8,7,5,7,44,28,22,14,9,36,24,14,55,54,22,53,8,23,4,5,7,5,7,6,8,8,30,16,15,20,16,15,17,14,6,39,93,33,6,11,5,5,6,4,7,6,6,6,148,7,30,22,21,13,15,11,21,20,90,76,38,5,7,6,4,5,6,6,5,10,8,12,12,11,13,7,12,10,10,8,63,50,12,4,7,4,6,5,5,8,6,5,22,9,14,19,22,14,11,10,5,5,72,15,6,5,5,4,5,5,3,5,7,5,19,13,9,12,11,15,13,8,7,8,33,57,5,3,4,3,4,4,7,7,6,6,55,5,12,25,9,13,11,14,7,2,8,31,4,3,6,4,5,5,2,6,6,6,54,6,13,29,12,13,11,8,7,3,5,19,6,4,6,4,5,4,4,5,4,6],
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
