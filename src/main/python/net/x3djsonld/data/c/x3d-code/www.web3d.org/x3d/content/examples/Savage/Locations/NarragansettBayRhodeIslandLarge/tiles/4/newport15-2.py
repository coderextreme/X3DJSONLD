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
    GeoLOD(center=(41.86339110810791,-71.68129407658296,0.0),range=6150.5674,child1Url=['../../tiles/5/newport30-4.x3d'],child2Url=['../../tiles/5/newport30-5.x3d'],child3Url=['../../tiles/5/newport31-4.x3d'],child4Url=['../../tiles/5/newport31-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport15-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[110,106,111,124,129,150,162,176,182,187,186,182,176,175,177,180,185,189,195,192,187,184,115,107,107,118,134,151,164,176,179,184,186,179,176,178,181,186,191,195,194,191,187,185,121,113,113,121,130,149,162,168,181,188,187,174,177,179,187,192,196,197,194,193,193,193,117,114,114,117,125,136,154,168,179,185,181,180,183,189,194,198,199,200,198,198,198,197,129,120,115,122,131,137,146,154,173,179,179,186,190,191,195,198,201,202,201,200,199,199,127,117,118,118,135,145,155,164,164,166,167,179,191,196,202,205,206,206,205,203,201,201,133,125,124,122,132,150,165,170,166,165,169,176,190,199,208,211,212,210,207,203,201,200,133,138,134,121,121,129,151,170,170,166,169,177,193,207,213,216,215,212,208,203,201,201,138,138,151,132,128,141,169,189,162,163,169,185,203,213,218,219,217,213,207,202,199,198,144,136,130,129,131,138,150,146,149,156,169,189,210,216,219,221,219,214,206,199,194,192,145,129,130,130,132,137,137,145,155,168,177,194,212,218,220,222,218,211,203,194,194,193,139,132,136,138,151,142,144,145,161,172,185,199,210,214,218,218,211,205,196,189,186,185,147,139,148,145,154,156,152,145,160,176,191,203,210,211,212,209,206,201,194,189,185,183,156,152,150,155,157,161,150,148,162,171,193,203,205,206,205,204,204,198,192,189,184,183,168,162,155,176,174,153,156,156,161,169,192,201,199,200,200,207,201,196,193,190,188,187,167,177,169,173,166,156,151,154,156,169,185,191,190,194,201,206,200,200,195,191,189,188,182,192,179,176,171,158,150,152,155,168,180,185,189,199,206,203,203,200,192,189,186,186,182,194,192,181,165,152,150,151,159,164,174,183,192,203,200,201,205,197,189,186,179,177,183,190,192,180,174,151,154,159,160,168,171,185,194,199,196,202,201,194,184,178,173,171,176,181,187,182,170,153,159,176,185,175,175,185,194,195,193,194,191,185,173,169,164,160,161,160,160,161,156,149,151,159,170,177,180,183,190,191,190,188,179,172,173,163,147,144,161,160,159,160,156,148,152,158,169,176,179,183,190,191,189,187,178,173,174,164,146,143],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
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
