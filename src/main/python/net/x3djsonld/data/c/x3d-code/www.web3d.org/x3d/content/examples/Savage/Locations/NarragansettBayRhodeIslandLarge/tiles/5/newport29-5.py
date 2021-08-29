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
        texture=ImageTexture(url=['../../images/5/newport29-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.68129407658296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[168,168,165,158,150,147,152,157,161,162,162,166,172,176,178,180,180,179,178,176,176,175,172,171,167,161,157,154,157,162,166,167,166,167,172,176,179,180,182,182,180,179,180,180,174,172,170,166,163,161,164,167,170,170,169,169,172,176,179,180,182,183,183,182,183,182,176,172,169,169,169,164,167,170,173,173,171,170,172,176,179,180,181,183,184,184,185,184,178,173,171,171,175,169,169,172,173,173,172,172,174,177,179,180,182,184,186,187,188,188,179,175,174,174,179,173,170,172,173,173,172,173,175,178,180,181,183,187,190,192,190,189,182,179,179,177,179,174,171,172,173,174,173,173,176,178,180,183,187,191,194,195,191,189,184,181,180,179,178,173,172,173,174,174,174,175,177,180,182,185,190,194,196,194,190,189,185,182,181,179,178,174,173,174,175,176,177,177,179,182,185,188,193,196,194,192,189,187,185,184,182,178,176,175,174,175,176,177,178,180,182,184,187,191,196,195,193,190,188,186,186,185,183,179,176,175,176,176,178,179,180,183,185,187,190,195,195,194,192,190,187,186,187,185,182,177,176,176,176,178,180,182,183,185,187,190,194,195,194,193,191,189,187,187,186,184,180,175,176,177,178,179,181,184,186,187,191,194,195,195,194,193,191,190,188,187,185,184,178,175,176,178,178,180,184,186,188,190,194,195,196,195,194,193,191,190,189,189,187,182,175,174,176,181,179,184,186,189,191,193,195,197,197,196,195,194,193,193,193,193,180,175,174,175,178,181,183,186,189,192,194,196,197,198,198,197,196,195,195,195,196,196,181,177,178,180,182,184,188,191,193,196,198,197,199,200,200,199,198,198,198,198,198,198,182,181,182,185,185,185,189,192,195,196,197,198,200,201,201,201,200,199,199,199,198,198,180,181,185,188,189,189,190,193,194,196,197,199,201,202,202,201,201,200,200,200,199,199,176,175,184,189,191,192,193,194,197,198,200,201,202,203,203,203,202,202,201,201,200,200,168,169,182,187,191,193,195,197,200,202,203,204,205,205,205,205,204,203,203,202,201,201,166,169,177,183,190,194,196,199,203,205,206,207,207,208,207,207,207,205,203,202,201,201,170,170,176,181,188,193,197,202,206,208,209,210,210,210,209,208,207,205,203,202,201,201,169,170,176,181,188,193,197,202,207,208,209,210,211,210,210,209,207,205,203,202,201,201],
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
