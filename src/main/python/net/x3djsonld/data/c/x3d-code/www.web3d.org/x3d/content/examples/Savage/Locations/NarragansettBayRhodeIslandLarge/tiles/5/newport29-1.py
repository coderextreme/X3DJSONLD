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
        texture=ImageTexture(url=['../../images/5/newport29-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.7692354927566,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[210,210,211,207,203,199,198,198,200,201,203,204,203,200,199,199,199,197,198,197,196,196,209,211,211,209,204,200,197,196,198,201,203,201,202,198,194,193,196,195,195,196,196,196,214,214,211,209,205,202,202,199,196,199,200,199,198,196,193,192,193,196,196,196,196,195,215,214,209,205,202,201,199,201,202,201,198,197,193,192,190,191,192,193,194,195,192,191,215,212,210,206,202,200,198,199,200,198,195,195,194,192,190,190,190,191,193,192,188,187,214,210,208,204,202,201,200,200,200,196,193,194,192,192,192,190,190,193,190,187,182,181,212,213,209,206,204,202,198,198,199,196,196,197,192,192,192,192,192,189,188,184,178,176,212,210,207,207,206,203,203,199,200,200,201,197,191,191,187,187,188,186,186,180,175,175,213,211,208,205,204,204,202,203,203,202,202,198,191,189,185,182,180,180,177,175,170,169,212,210,207,204,202,203,205,205,208,208,205,198,193,188,187,181,177,176,173,172,173,174,211,209,207,207,204,204,209,211,210,213,209,204,197,190,187,183,180,177,176,177,178,177,210,209,208,209,208,210,212,215,216,217,210,206,200,195,190,185,182,181,179,180,179,178,220,212,208,207,211,211,213,216,216,216,210,205,201,196,188,186,188,185,182,181,174,174,220,213,211,208,210,214,216,216,217,215,212,208,202,195,194,192,190,188,186,177,176,175,217,217,212,211,216,216,212,212,215,214,212,208,206,199,196,195,192,189,186,183,175,174,216,216,215,216,212,211,212,216,217,214,209,206,206,201,200,198,192,190,189,183,174,173,217,215,213,213,211,209,213,215,212,210,211,208,206,201,195,193,192,189,184,180,173,172,221,219,215,211,209,210,211,209,209,206,205,204,203,202,195,191,189,185,182,177,171,170,219,216,217,212,209,212,209,204,203,204,204,201,198,196,194,188,185,181,177,172,170,170,222,217,211,211,213,210,208,206,203,197,198,198,196,193,187,186,181,175,170,169,171,170,221,219,218,216,215,207,205,202,200,198,195,194,192,191,187,184,175,168,167,172,171,170,223,224,222,218,216,211,206,201,200,200,195,192,192,191,186,177,169,166,164,165,163,162,228,224,223,219,215,212,204,202,198,195,193,194,192,188,183,175,169,168,171,165,163,163,228,224,223,220,215,211,204,202,198,195,194,193,192,188,182,174,169,169,171,167,163,163],
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
