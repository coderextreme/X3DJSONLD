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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='ArtDecoExamplesExcerpt.x3d',name='title'),
    meta(content="Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples. Excerpted from original.",name='description'),
    meta(content='David Roussel',name='creator'),
    meta(content='James Harney, Don Brutzman NPS',name='translator'),
    meta(content='7 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Xj3D not displaying materials loaded from ExternProtoDeclare ProtoInstance nodes',name='TODO'),
    meta(content='http://vrmlstuff.free.fr/materials',name='reference'),
    meta(content='Universal Media Material Library',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoExamplesExcerpt.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  Note that these url address references were changed from original collection in Basic X3D Examples Archive and instead reference local excerpt 
    children=[
    WorldInfo(title='ArtDecoExamplesExcerpt.x3d'),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco00',url=["ArtDecoPrototypesExcerpt.x3d#ArtDeco00","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco00","ArtDecoPrototypesExcerpt.wrl#ArtDeco00","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.wrl#ArtDeco00"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco01',url=["ArtDecoPrototypesExcerpt.x3d#ArtDeco01","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco01","ArtDecoPrototypesExcerpt.wrl#ArtDeco01","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.wrl#ArtDeco01"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='ArtDeco02',url=["ArtDecoPrototypesExcerpt.x3d#ArtDeco02","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02","ArtDecoPrototypesExcerpt.wrl#ArtDeco02","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.wrl#ArtDeco02"]),
    Group(
      children=[
      NavigationInfo(headlight=False),
      Viewpoint(DEF='Front',description='Front view',position=(0.0,0.0,12.0)),
      Viewpoint(DEF='PersRight',description='Low Right',orientation=(0.74291,0.30772,0.59447,1.2171),position=(6.9282,-6.9282,6.9282)),
      Viewpoint(DEF='PersLeft',description='Low Left',orientation=(0.74291,-0.30772,-0.59447,1.2171),position=(-6.9282,-6.9282,6.9282)),
      Viewpoint(DEF='Back',description='Back view',orientation=(0.0,1.0,0.0,3.1416),position=(0.0,0.0,-12.0)),
      Transform(DEF='Close_travel',
        children=[
        PositionInterpolator(DEF='Close_Mover',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(0.0,2.5,0.0),(0.0,0.0,0.0),(0.0,-2.5,0.0),(0.0,0.0,0.0),(0.0,2.5,0.0)]),
        TimeSensor(DEF='Close_Time',cycleInterval=12.0,loop=True),
        Viewpoint(DEF='Close',description='Close Front',position=(0.0,0.0,6.0))]),
      DirectionalLight(direction=(1.0,-1.0,-1.0)),
      DirectionalLight(direction=(0.0,1.0,-0.5),intensity=0.5),
      Anchor(description='Back to front view',url=["#Front"],
        children=[
        Transform(translation=(0.0,0.0,-0.5),
          children=[
          Inline(url=["../../Basic/UniversalMediaMaterials/gridBack.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d","../../Basic/UniversalMediaMaterials/gridBack.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl"])])]),
      Viewpoint(DEF='View00',description='ArtDeco00',position=(-3.75,3.75,3.0)),
      Transform(translation=(-3.75,3.75,0.0),
        children=[
        Anchor(description='ArtDeco00 view',url=["#View00"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='ArtDeco00')),
            geometry=Sphere(DEF='Ball',radius=0.5))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='ArtDeco',parameter=["target=_source"],url=["ArtDecoPrototypesExcerpt.html#ProtoDeclare_ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypesExcerpt.html#ProtoDeclare_ArtDeco"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='TextMat',diffuseColor=(1.0,1.0,1.0))),
              geometry=Text(string=["ArtDeco00"],
                fontStyle=FontStyle(DEF='Style',family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.3,style_='BOLD')))])])]),
      Viewpoint(DEF='View01',description='ArtDeco01',position=(-2.25,3.75,3.0)),
      Transform(translation=(-2.25,3.75,0.0),
        children=[
        Anchor(description='ArtDeco01 view',url=["#View01"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='ArtDeco01')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='ArtDeco01',parameter=["target=_source"],url=["ArtDecoPrototypesExcerpt.html#ProtoDeclare_ArtDeco01","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.html#ProtoDeclare_ArtDeco01"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["ArtDeco01"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View02',description='ArtDeco02',position=(-0.75,3.75,3.0)),
      Transform(translation=(-0.75,3.75,0.0),
        children=[
        Anchor(description='ArtDeco02 view',url=["#View02"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='ArtDeco02')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='ArtDeco02',parameter=["target=_source"],url=["ArtDecoPrototypesExcerpt.html#ProtoDeclare_ArtDeco02","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.html#ProtoDeclare_ArtDeco02"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["ArtDeco02"],
                fontStyle=FontStyle(USE='Style')))])])])]),
    ROUTE(fromField='fraction_changed',fromNode='Close_Time',toField='set_fraction',toNode='Close_Mover'),
    ROUTE(fromField='value_changed',fromNode='Close_Mover',toField='set_translation',toNode='Close_travel')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ArtDecoExamplesExcerpt.py")
