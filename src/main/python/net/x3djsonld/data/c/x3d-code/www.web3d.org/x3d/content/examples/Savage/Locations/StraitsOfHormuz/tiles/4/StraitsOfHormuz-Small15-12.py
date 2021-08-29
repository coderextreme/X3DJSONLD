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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small15-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.130324311166753,56.93416835294592,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[10,5,8,8,12,9,10,10,10,14,17,20,20,22,23,18,25,24,25,26,29,29,7,10,12,10,10,5,9,8,13,13,15,17,21,21,21,22,21,26,26,22,27,25,7,10,10,11,10,9,10,13,15,17,16,19,23,25,29,25,23,30,28,27,30,27,6,10,10,11,12,12,10,11,14,17,17,21,22,26,28,24,23,29,33,30,32,31,11,9,11,12,12,13,7,14,13,16,19,20,23,24,27,30,24,28,32,32,36,32,10,12,9,13,11,12,11,14,17,20,19,23,22,24,29,33,26,28,28,38,37,37,7,11,9,13,13,10,12,17,17,18,21,23,22,25,31,33,28,30,32,38,43,46,6,9,9,14,12,12,10,16,16,18,20,21,23,24,27,30,30,32,34,38,45,82,12,13,12,14,12,13,15,15,18,21,22,22,24,25,31,32,35,32,32,37,37,48,8,9,11,13,16,14,16,17,20,20,22,24,24,28,27,34,34,34,32,35,49,60,10,4,11,12,14,15,19,21,18,21,22,24,27,28,29,32,31,39,40,43,58,57,13,10,16,13,15,17,16,18,20,21,24,24,25,27,34,31,36,39,37,52,56,53,11,13,13,14,16,17,16,18,18,22,24,24,23,26,29,35,32,35,37,50,47,47,10,9,12,11,14,14,16,19,20,21,21,24,24,24,24,29,31,33,38,48,47,60,10,8,11,11,12,20,17,21,20,20,19,21,24,24,30,27,30,33,38,45,57,58,9,10,9,15,13,16,20,19,19,23,22,21,23,23,24,23,31,31,39,48,70,95,8,9,12,15,18,17,16,19,23,22,18,20,21,22,26,27,33,36,39,44,89,99,10,12,10,13,15,14,17,17,22,19,17,19,20,22,23,30,35,37,44,52,93,192,9,10,13,12,16,15,16,17,20,17,15,19,21,21,26,30,34,40,45,61,181,130,11,12,14,13,15,15,17,17,19,16,17,18,20,22,20,32,40,43,49,90,101,109,10,13,13,14,14,14,14,16,16,17,19,18,23,23,29,34,39,43,61,109,98,104,12,14,12,13,13,17,16,12,15,17,19,18,20,24,30,33,39,45,54,100,149,163,13,14,13,14,12,15,17,12,15,18,19,20,21,25,29,34,40,46,56,106,141,165],
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
