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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small7-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.23356479529115,56.180963250426785,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[5,32,198,230,269,155,13,2,3,0,3,1,6,4,6,5,-11,0,229,561,496,278,2,5,62,169,211,17,3,4,5,1,1,6,2,0,1,-2,2,-3,78,346,120,187,3,0,3,105,188,154,1,0,1,3,1,1,3,0,0,4,3,11,30,69,83,203,2,2,4,25,63,188,2,1,4,0,2,3,2,3,0,3,4,2,18,-8,132,351,2,5,0,1,55,127,1,0,2,0,3,3,4,3,3,4,2,4,4,7,31,170,1,2,4,1,22,29,0,1,4,0,3,5,0,2,1,3,2,0,7,9,386,516,3,1,2,1,1,4,2,1,0,4,4,4,3,3,2,3,5,1,9,161,329,460,0,3,0,0,1,2,3,1,1,0,6,3,0,3,1,5,5,2,0,9,255,400,1,1,2,0,2,1,2,5,3,2,2,2,2,2,5,6,0,4,4,109,265,374,0,1,3,2,1,1,2,0,1,3,5,2,3,1,5,5,2,6,1,112,393,347,2,3,2,0,4,2,3,1,4,4,4,6,2,4,7,5,4,3,1,21,276,57,2,1,0,3,1,3,2,4,2,4,2,0,7,3,2,6,1,8,2,5,72,30,2,2,3,4,3,3,5,2,1,2,6,4,1,9,4,5,2,3,4,4,0,5,0,3,0,3,2,3,2,3,6,6,4,1,4,3,8,4,3,8,4,8,1,1,3,2,5,0,3,2,3,6,4,4,4,4,4,9,7,2,3,6,5,4,4,40,2,4,0,0,6,1,4,3,5,5,4,5,3,5,7,5,5,3,3,6,2,197,3,3,1,1,2,3,3,1,5,6,8,13,4,4,4,4,7,2,5,4,2,78,1,3,2,8,3,5,4,4,6,5,5,4,10,5,4,4,4,5,2,4,2,4,4,3,4,7,2,4,2,5,4,5,7,5,3,1,6,2,3,2,4,3,3,5,3,2,4,5,8,5,4,5,5,4,4,5,5,3,3,5,3,3,2,4,4,3,1,2,6,5,6,5,6,2,7,6,6,5,4,2,2,5,3,1,6,1,5,6,3,3,4,5,5,2,5,3,5,7,3,4,4,2,2,3,5,3,2,4,2,4,4,2,3,5,6,4,5,4,5,6,3,4,4,2,1,3,4,4,1,3,0,5],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])))])
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
