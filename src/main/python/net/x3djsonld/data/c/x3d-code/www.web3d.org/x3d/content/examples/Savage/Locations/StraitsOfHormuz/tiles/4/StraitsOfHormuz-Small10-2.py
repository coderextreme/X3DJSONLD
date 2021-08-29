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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small10-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.569849613744502,55.42775814790765,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[-7,0,0,-1,0,4,2,-3,-4,-4,0,-1,0,0,0,-1,0,0,0,3,-6,0,-1,5,0,0,5,0,0,-4,-4,0,0,20,0,0,0,0,4,0,3,-6,0,1,10,0,-5,0,0,0,-4,-4,-6,0,25,0,0,0,0,0,-11,0,-6,-1,1,4,0,-3,0,2,1,-3,-4,-5,0,-1,0,0,0,3,0,25,0,-2,-5,0,4,0,0,0,6,1,-2,-4,-4,0,0,21,0,0,0,0,26,2,-1,-7,3,4,3,1,13,3,0,2,-13,-4,-2,0,30,10,0,0,0,0,1,0,-9,2,12,0,1,-6,8,30,16,0,-5,-3,0,9,96,56,0,1,0,-9,0,-5,5,9,2,0,-5,-3,21,10,31,24,17,8,5,116,148,152,27,0,27,0,-2,0,5,4,0,5,3,9,21,15,9,6,12,40,98,121,145,151,153,76,4,0,-9,4,9,2,2,4,12,13,18,6,8,12,15,81,83,148,105,134,126,168,15,6,4,12,4,0,6,10,13,8,21,16,12,19,33,142,151,154,135,118,142,85,17,16,6,2,0,8,4,13,8,0,20,22,25,45,128,137,157,151,141,151,123,112,86,52,18,10,3,3,13,10,0,0,39,104,123,165,135,163,157,125,149,155,149,184,78,109,11,10,15,0,13,1,2,16,68,111,140,114,123,181,202,136,145,156,168,187,187,161,17,19,14,11,10,8,12,18,85,88,105,68,117,150,182,192,199,180,212,142,184,61,62,29,25,33,10,7,21,26,39,42,42,47,105,167,168,200,199,164,215,188,168,105,76,141,50,32,22,12,78,26,17,17,19,44,85,128,164,153,179,158,187,187,134,259,200,238,134,74,74,46,27,24,24,23,23,27,59,88,107,140,148,127,228,180,147,214,169,226,140,81,68,40,77,32,12,16,16,52,48,58,61,112,181,214,86,121,126,165,220,290,151,145,55,45,36,18,11,11,16,26,36,32,69,63,121,147,40,94,155,198,189,263,360,155,75,51,45,41,6,9,17,18,25,35,46,39,60,32,33,53,99,123,156,236,261,215,165,69,86,49,9,1,7,10,14,20,39,34,50,40,35,47,40,79,140,225,216,236,155,127,171,64,8,1,7,9,14,21,37,33,48,47,27,38,34,76,138,205,203,240,179,142,188,59],
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
