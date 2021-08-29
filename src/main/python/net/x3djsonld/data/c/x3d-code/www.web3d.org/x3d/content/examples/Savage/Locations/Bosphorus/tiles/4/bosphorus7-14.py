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
        texture=ImageTexture(url=['../../images/4/bosphorus7-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.0075820664573,29.47604227744523,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[165,181,208,208,214,209,209,215,255,271,294,282,221,252,242,297,291,287,266,236,239,227,171,199,218,221,214,187,207,240,282,307,313,240,233,216,249,295,275,269,253,225,225,229,179,186,209,197,190,184,223,212,262,296,258,211,248,220,268,260,256,263,255,213,183,196,174,202,202,187,168,192,221,200,233,227,224,217,237,209,233,230,262,235,261,227,201,187,194,201,181,165,182,201,215,210,184,234,186,191,224,209,215,236,263,230,247,198,182,176,181,187,158,179,211,210,205,225,209,195,165,192,217,215,209,254,269,214,254,239,203,180,181,145,161,195,205,202,206,203,223,162,154,208,234,226,183,257,232,199,222,220,205,194,156,151,168,178,190,189,187,183,218,170,177,204,221,180,189,230,186,217,209,227,195,188,150,159,178,209,198,189,182,161,197,166,176,175,211,169,235,233,177,216,187,229,193,181,183,189,182,203,195,168,163,154,183,149,145,194,192,161,212,244,205,167,215,226,229,220,222,198,210,209,207,185,136,148,172,151,155,190,158,177,227,236,215,176,201,225,176,157,217,221,221,201,207,177,152,120,156,122,170,178,145,182,211,200,204,151,208,191,141,145,214,202,186,184,217,191,185,134,123,100,137,155,137,189,210,164,130,159,147,155,187,186,200,168,195,226,223,206,121,106,99,118,118,168,144,161,196,124,170,137,147,188,201,195,180,159,180,223,180,98,104,121,117,165,112,122,172,187,179,133,178,173,189,148,162,176,155,156,199,203,129,102,166,145,137,180,134,122,188,201,142,156,197,220,204,184,214,213,136,179,180,139,102,107,155,156,163,171,156,114,148,175,122,161,200,228,220,225,233,222,186,144,124,91,96,116,152,168,196,183,177,178,133,121,150,179,188,216,194,222,226,232,194,111,92,107,156,134,136,162,182,191,198,206,193,157,154,167,164,179,188,199,204,207,156,101,124,181,163,137,144,174,189,188,216,216,194,147,189,207,183,162,177,197,229,230,76,98,118,162,173,156,144,163,197,211,221,197,169,151,160,191,215,190,169,204,214,213,100,122,159,155,183,183,170,181,212,227,214,195,198,183,198,174,205,199,189,181,219,214,117,143,143,167,174,150,188,197,184,190,225,206,214,200,199,198,192,195,212,196,231,241,121,148,149,166,170,145,184,191,179,195,225,202,210,206,202,199,190,196,212,198,230,239],
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
