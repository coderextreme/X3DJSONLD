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
        texture=ImageTexture(url=['../../images/5/newport30-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[163,161,161,161,165,175,179,178,172,157,160,155,149,143,139,135,131,131,130,127,125,125,162,162,160,161,166,174,178,174,161,162,157,150,146,142,136,135,143,143,137,128,124,124,162,162,160,161,167,167,169,167,160,158,153,145,141,140,140,142,143,140,132,126,125,126,165,165,162,160,160,160,159,157,155,152,147,142,141,143,146,148,142,136,130,127,127,128,167,166,163,161,162,159,158,155,153,151,146,143,144,148,152,155,148,142,133,130,130,130,167,165,162,161,161,163,163,160,156,152,146,145,149,154,160,162,157,148,139,132,132,132,170,167,165,165,166,167,166,160,156,152,147,150,155,160,165,167,161,151,143,135,129,128,171,168,167,169,172,171,169,163,158,154,149,153,159,165,169,169,162,152,143,135,126,126,173,171,170,170,174,173,169,164,159,155,152,153,161,168,171,168,162,152,141,132,127,128,173,171,171,170,175,175,169,164,159,156,152,155,163,168,168,165,160,148,140,133,129,129,172,172,170,168,173,171,164,161,158,155,154,159,164,166,163,160,154,146,142,139,130,129,170,169,167,166,168,163,163,160,160,158,161,166,169,169,167,160,155,148,143,140,131,131,172,168,168,169,167,166,167,163,164,166,169,175,178,173,169,162,155,149,145,140,132,132,174,172,168,172,170,169,167,165,168,173,177,183,181,177,171,162,156,150,146,142,135,135,171,172,169,173,172,171,169,170,174,180,185,186,183,179,171,164,157,152,146,143,140,140,178,173,175,176,174,173,171,173,179,187,191,190,189,184,176,167,159,154,148,151,148,148,181,177,179,179,177,175,174,178,186,193,195,194,192,188,180,170,165,158,153,157,158,157,183,181,177,180,180,179,182,186,188,197,199,196,193,189,181,172,170,163,158,157,165,166,180,179,178,180,181,185,188,192,193,200,201,199,193,189,181,177,175,169,162,159,170,171,180,179,179,181,184,189,194,200,202,202,204,201,194,185,184,183,178,171,161,163,167,168,182,181,181,182,187,193,199,205,210,208,209,203,195,187,184,182,176,171,160,161,163,163,186,185,183,183,189,197,202,209,214,213,209,204,196,189,184,179,174,167,160,159,156,155,188,186,184,185,190,198,206,212,215,214,209,203,196,190,186,180,174,167,161,156,152,152,188,186,184,185,190,198,206,212,215,214,208,202,196,190,187,180,174,167,161,155,152,152],
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
