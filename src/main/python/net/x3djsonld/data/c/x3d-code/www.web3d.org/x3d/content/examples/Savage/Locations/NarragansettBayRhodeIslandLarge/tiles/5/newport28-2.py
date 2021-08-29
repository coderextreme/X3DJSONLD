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
        texture=ImageTexture(url=['../../images/5/newport28-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[187,187,186,185,184,184,181,183,187,180,170,161,159,158,153,147,146,146,146,147,147,147,188,187,185,185,182,179,177,178,179,175,165,158,158,157,150,147,146,146,146,147,147,147,188,184,186,184,180,176,171,168,168,161,157,151,152,152,151,147,146,147,147,148,147,147,180,179,183,180,177,173,168,164,159,155,151,148,148,149,149,148,148,151,153,156,155,155,177,175,177,176,173,169,167,164,159,155,150,149,148,148,149,148,149,155,157,159,159,159,175,174,175,174,172,169,166,161,156,153,151,150,149,148,149,147,147,154,155,158,159,159,176,175,172,173,170,167,163,159,155,152,152,151,149,148,148,147,147,148,155,155,150,150,177,176,172,167,166,164,161,158,155,155,154,152,150,148,148,147,146,147,151,150,151,152,180,177,174,171,167,163,161,159,158,158,157,155,152,149,148,147,146,147,148,150,151,151,181,177,173,170,167,163,162,162,164,162,160,157,155,151,148,147,147,146,148,153,150,151,181,177,174,170,167,164,164,166,167,165,162,159,158,156,152,148,147,146,151,151,151,151,180,177,174,169,169,168,170,171,171,168,164,163,163,160,154,152,152,148,146,149,152,152,179,175,173,173,172,172,174,175,174,172,168,167,165,161,157,153,149,145,147,148,147,147,179,179,175,175,175,176,178,178,176,174,172,171,166,162,157,152,145,144,146,147,143,143,184,180,177,179,179,179,180,179,178,177,175,171,167,163,158,152,146,143,145,143,141,140,185,181,180,181,182,183,182,180,180,179,177,173,169,161,156,148,141,141,144,144,140,139,185,181,182,183,184,184,182,181,180,179,177,174,168,160,151,150,146,145,143,144,142,142,185,184,184,186,186,184,183,182,181,179,175,164,159,155,150,144,143,142,142,144,143,143,187,187,187,188,186,185,184,183,180,175,166,169,165,155,144,142,141,141,142,141,141,141,190,190,190,189,187,185,184,182,175,169,171,170,160,149,143,140,141,142,139,139,139,138,193,193,192,190,187,185,183,180,173,169,169,165,150,141,139,140,139,139,139,140,138,138,194,194,193,190,187,184,181,177,173,167,161,151,140,140,144,139,141,140,140,139,138,138,196,194,192,189,186,183,178,175,171,163,155,147,140,138,138,138,140,140,139,139,139,139,196,194,191,189,186,182,177,175,171,163,156,148,141,138,138,138,139,140,139,139,139,139],
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
