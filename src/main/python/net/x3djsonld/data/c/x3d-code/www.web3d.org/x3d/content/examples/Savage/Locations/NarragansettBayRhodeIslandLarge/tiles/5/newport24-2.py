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
        texture=ImageTexture(url=['../../images/5/newport24-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[129,131,131,131,134,137,137,135,135,135,134,136,138,139,135,137,136,137,137,137,137,137,131,131,132,133,130,131,132,132,134,133,134,132,132,136,138,137,138,141,140,138,138,138,131,131,131,132,133,131,131,132,127,125,125,131,133,139,143,141,140,144,144,142,143,143,132,129,129,131,129,128,131,133,132,128,129,129,135,139,141,144,145,145,148,149,150,150,135,137,138,133,129,129,132,133,135,137,139,139,139,141,143,148,150,152,154,155,155,154,142,140,133,132,135,135,135,139,147,150,149,149,146,146,148,150,154,155,160,158,159,159,140,139,137,132,138,143,141,147,153,160,163,158,156,153,153,152,157,159,160,162,163,163,141,137,134,137,142,144,146,148,154,162,168,168,165,161,158,155,154,157,162,167,169,169,136,135,138,138,133,138,143,145,154,159,167,171,170,164,163,164,161,163,164,167,169,169,130,135,138,132,132,137,145,150,155,161,170,174,176,172,166,161,164,161,163,162,165,165,127,130,131,128,125,135,147,150,152,159,164,168,173,171,166,161,158,158,158,163,169,169,129,130,133,138,138,134,144,144,147,151,157,164,166,164,163,158,160,162,161,163,166,167,138,138,142,149,148,143,141,138,140,144,148,153,156,159,161,162,160,163,165,165,172,173,150,153,157,162,163,152,143,136,135,143,151,154,158,164,169,171,171,172,172,173,174,174,157,163,165,167,163,156,145,139,135,141,149,152,155,159,162,169,176,178,176,176,176,176,161,163,164,162,156,152,147,144,140,146,146,148,150,154,161,164,168,176,178,176,174,173,162,161,158,155,153,151,151,149,146,143,141,143,149,155,158,162,164,165,170,171,170,170,162,159,155,152,152,151,151,152,152,149,143,140,147,153,156,155,156,159,163,167,164,164,160,157,152,152,151,150,150,157,160,159,151,148,140,145,149,153,158,157,163,158,161,161,157,155,153,152,152,155,157,160,159,159,155,155,146,141,142,150,160,158,153,157,157,157,154,153,153,154,154,157,161,162,160,156,154,148,144,142,143,148,147,149,149,153,160,160,152,151,150,149,154,157,159,160,159,157,151,144,141,141,140,139,141,148,149,151,162,163,152,150,150,151,154,153,154,157,157,152,147,143,142,142,141,143,140,141,150,154,160,162,152,150,151,151,153,153,154,155,155,151,146,143,143,143,142,144,140,140,150,155,161,162],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
