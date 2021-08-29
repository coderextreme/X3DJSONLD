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
        texture=ImageTexture(url=['../../images/4/bosphorus5-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.898245841898074,29.327679094953055,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[86,63,74,112,100,85,90,98,104,105,102,105,114,120,131,135,164,176,189,200,210,207,83,68,54,101,111,82,91,99,103,103,108,110,117,124,125,131,146,164,180,206,211,211,79,47,79,85,90,85,96,101,103,101,104,110,122,136,144,146,149,167,182,206,203,200,90,74,58,63,78,88,94,107,103,102,105,111,122,136,155,150,168,179,187,201,208,202,90,78,59,76,81,89,100,102,102,104,101,112,127,144,157,165,173,188,203,204,201,199,91,67,70,77,85,92,101,97,98,100,102,112,125,142,161,153,170,187,202,215,207,205,76,61,74,93,93,100,99,98,97,101,105,110,117,133,144,157,185,198,209,219,204,201,79,66,76,86,101,108,102,100,101,97,103,111,126,134,142,156,182,198,207,207,199,200,71,69,93,106,109,115,106,108,106,99,100,109,131,146,152,157,170,183,208,191,190,192,69,87,103,112,114,118,114,109,106,98,96,111,135,144,141,159,161,186,203,190,187,191,83,113,136,154,137,122,119,109,104,94,99,107,117,133,137,144,167,170,191,181,168,170,84,106,131,169,151,129,117,105,101,93,95,104,114,118,130,161,160,165,175,182,172,164,82,111,145,183,148,143,137,114,100,92,96,107,118,124,139,142,153,152,163,183,174,166,86,95,127,143,137,144,121,113,110,90,96,107,118,117,125,134,144,152,171,181,175,168,89,94,97,113,109,118,106,102,113,87,93,102,103,109,112,121,129,153,171,173,157,157,94,99,93,92,94,97,99,112,104,85,97,119,112,118,126,133,138,145,158,167,142,140,105,110,101,91,89,89,94,100,93,81,93,107,102,111,126,143,152,154,160,151,143,149,112,113,96,107,96,87,96,105,100,81,87,90,94,107,121,140,153,156,161,146,152,159,115,102,103,113,111,106,81,93,103,78,88,96,99,104,126,143,152,147,158,136,154,164,114,113,116,122,127,100,95,78,77,81,88,96,106,119,126,140,148,130,145,128,150,155,125,138,141,144,116,112,98,75,77,88,98,108,105,115,132,135,124,137,143,128,157,163,146,178,159,151,132,131,115,76,84,102,104,115,114,124,139,134,116,145,132,129,131,135,159,181,181,180,137,118,122,70,84,94,122,118,125,121,119,128,113,128,118,132,123,127,162,180,184,181,134,111,122,69,86,93,120,119,127,121,117,128,113,124,118,133,120,123],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])))])
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
