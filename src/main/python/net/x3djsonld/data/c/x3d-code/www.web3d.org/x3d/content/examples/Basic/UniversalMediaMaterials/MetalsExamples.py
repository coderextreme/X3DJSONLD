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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='MetalsExamples.x3d',name='title'),
    meta(content="Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples.",name='description'),
    meta(content='David Roussel',name='creator'),
    meta(content='James Harney, Don Brutzman NPS',name='translator'),
    meta(content='7 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://vrmlstuff.free.fr/materials',name='reference'),
    meta(content='Universal Media Material Library',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsExamples.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='MetalsExamples.x3d'),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal00',url=["MetalsPrototypes.x3d#Metal00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal00","MetalsPrototypes.wrl#Metal00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal00"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal01',url=["MetalsPrototypes.x3d#Metal01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal01","MetalsPrototypes.wrl#Metal01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal01"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal02',url=["MetalsPrototypes.x3d#Metal02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal02","MetalsPrototypes.wrl#Metal02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal02"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal03',url=["MetalsPrototypes.x3d#Metal03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal03","MetalsPrototypes.wrl#Metal03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal03"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal04',url=["MetalsPrototypes.x3d#Metal04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal04","MetalsPrototypes.wrl#Metal04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal04"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal05',url=["MetalsPrototypes.x3d#Metal05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal05","MetalsPrototypes.wrl#Metal05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal05"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal06',url=["MetalsPrototypes.x3d#Metal06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal06","MetalsPrototypes.wrl#Metal06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal06"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal07',url=["MetalsPrototypes.x3d#Metal07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal07","MetalsPrototypes.wrl#Metal07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal07"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal08',url=["MetalsPrototypes.x3d#Metal08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal08","MetalsPrototypes.wrl#Metal08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal08"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal09',url=["MetalsPrototypes.x3d#Metal09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal09","MetalsPrototypes.wrl#Metal09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal09"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal10',url=["MetalsPrototypes.x3d#Metal10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal10","MetalsPrototypes.wrl#Metal10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal10"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal11',url=["MetalsPrototypes.x3d#Metal11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal11","MetalsPrototypes.wrl#Metal11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal11"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal12',url=["MetalsPrototypes.x3d#Metal12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal12","MetalsPrototypes.wrl#Metal12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal12"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal13',url=["MetalsPrototypes.x3d#Metal13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal13","MetalsPrototypes.wrl#Metal13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal13"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal14',url=["MetalsPrototypes.x3d#Metal14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal14","MetalsPrototypes.wrl#Metal14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal14"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal15',url=["MetalsPrototypes.x3d#Metal15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal15","MetalsPrototypes.wrl#Metal15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal15"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal16',url=["MetalsPrototypes.x3d#Metal16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal16","MetalsPrototypes.wrl#Metal16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal16"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal17',url=["MetalsPrototypes.x3d#Metal17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal17","MetalsPrototypes.wrl#Metal17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal17"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal18',url=["MetalsPrototypes.x3d#Metal18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal18","MetalsPrototypes.wrl#Metal18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal18"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal19',url=["MetalsPrototypes.x3d#Metal19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal19","MetalsPrototypes.wrl#Metal19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal19"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal20',url=["MetalsPrototypes.x3d#Metal20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal20","MetalsPrototypes.wrl#Metal20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal20"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal21',url=["MetalsPrototypes.x3d#Metal21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal21","MetalsPrototypes.wrl#Metal21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal21"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal22',url=["MetalsPrototypes.x3d#Metal22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal22","MetalsPrototypes.wrl#Metal22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal22"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal23',url=["MetalsPrototypes.x3d#Metal23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal23","MetalsPrototypes.wrl#Metal23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal23"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal24',url=["MetalsPrototypes.x3d#Metal24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal24","MetalsPrototypes.wrl#Metal24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal24"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal25',url=["MetalsPrototypes.x3d#Metal25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal25","MetalsPrototypes.wrl#Metal25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal25"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal26',url=["MetalsPrototypes.x3d#Metal26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal26","MetalsPrototypes.wrl#Metal26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal26"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal27',url=["MetalsPrototypes.x3d#Metal27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal27","MetalsPrototypes.wrl#Metal27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal27"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal28',url=["MetalsPrototypes.x3d#Metal28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal28","MetalsPrototypes.wrl#Metal28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal28"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal29',url=["MetalsPrototypes.x3d#Metal29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal29","MetalsPrototypes.wrl#Metal29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal29"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal30',url=["MetalsPrototypes.x3d#Metal30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal30","MetalsPrototypes.wrl#Metal30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal30"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal31',url=["MetalsPrototypes.x3d#Metal31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal31","MetalsPrototypes.wrl#Metal31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal31"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal32',url=["MetalsPrototypes.x3d#Metal32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal32","MetalsPrototypes.wrl#Metal32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal32"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal33',url=["MetalsPrototypes.x3d#Metal33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal33","MetalsPrototypes.wrl#Metal33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal33"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Metal34',url=["MetalsPrototypes.x3d#Metal34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.x3d#Metal34","MetalsPrototypes.wrl#Metal34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.wrl#Metal34"]),
    Group(
      children=[
      NavigationInfo(headlight=False,type=["EXAMINE"]),
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
          Inline(url=["gridBack.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d","gridBack.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl"])])]),
      Viewpoint(DEF='View00',description='Metal00',position=(-3.75,3.75,3.0)),
      Transform(translation=(-3.75,3.75,0.0),
        children=[
        Anchor(description='Metal00 view',url=["#View00"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal00')),
            geometry=Sphere(DEF='Ball',radius=0.5))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal00',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal00"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='TextMat',diffuseColor=(1.0,1.0,1.0))),
              geometry=Text(string=["Metal00"],
                fontStyle=FontStyle(DEF='Style',family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.3,style_='BOLD')))])])]),
      Viewpoint(DEF='View01',description='Metal01',position=(-2.25,3.75,3.0)),
      Transform(translation=(-2.25,3.75,0.0),
        children=[
        Anchor(description='Metal01 view',url=["#View01"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal01')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal01',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal01"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal01"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View02',description='Metal02',position=(-0.75,3.75,3.0)),
      Transform(translation=(-0.75,3.75,0.0),
        children=[
        Anchor(description='Metal02 view',url=["#View02"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal02')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal02',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal02"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal02"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View03',description='Metal03',position=(0.75,3.75,3.0)),
      Transform(translation=(0.75,3.75,0.0),
        children=[
        Anchor(description='Metal03 view',url=["#View03"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal03')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal03',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal03"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal03"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View04',description='Metal04',position=(2.25,3.75,3.0)),
      Transform(translation=(2.25,3.75,0.0),
        children=[
        Anchor(description='Metal04 view',url=["#View04"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal04')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal04',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal04"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal04"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View05',description='Metal05',position=(3.75,3.75,3.0)),
      Transform(translation=(3.75,3.75,0.0),
        children=[
        Anchor(description='Metal05 view',url=["#View05"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal05')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal05',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal05"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal05"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View06',description='Metal06',position=(-3.75,2.25,3.0)),
      Transform(translation=(-3.75,2.25,0.0),
        children=[
        Anchor(description='Metal06 view',url=["#View06"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal06')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal06',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal06"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal06"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View07',description='Metal07',position=(-2.25,2.25,3.0)),
      Transform(translation=(-2.25,2.25,0.0),
        children=[
        Anchor(description='Metal07 view',url=["#View07"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal07')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal07',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal07"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal07"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View08',description='Metal08',position=(-0.75,2.25,3.0)),
      Transform(translation=(-0.75,2.25,0.0),
        children=[
        Anchor(description='Metal08 view',url=["#View08"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal08')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal08',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal08"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal08"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View09',description='Metal09',position=(0.75,2.25,3.0)),
      Transform(translation=(0.75,2.25,0.0),
        children=[
        Anchor(description='Metal09 view',url=["#View09"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal09')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal09',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal09"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal09"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View10',description='Metal10',position=(2.25,2.25,3.0)),
      Transform(translation=(2.25,2.25,0.0),
        children=[
        Anchor(description='Metal10 view',url=["#View10"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal10')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal10',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal10"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal10"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View11',description='Metal11',position=(3.75,2.25,3.0)),
      Transform(translation=(3.75,2.25,0.0),
        children=[
        Anchor(description='Metal11 view',url=["#View11"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal11')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal11',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal1","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal11"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal11"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View12',description='Metal12',position=(-3.75,0.75,3.0)),
      Transform(translation=(-3.75,0.75,0.0),
        children=[
        Anchor(description='Metal12 view',url=["#View12"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal12')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal12',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal2","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal12"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal12"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View13',description='Metal13',position=(-2.25,0.75,3.0)),
      Transform(translation=(-2.25,0.75,0.0),
        children=[
        Anchor(description='Metal13 view',url=["#View13"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal13')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal13',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal13"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal13"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View14',description='Metal14',position=(-0.75,0.75,3.0)),
      Transform(translation=(-0.75,0.75,0.0),
        children=[
        Anchor(description='Metal14 view',url=["#View14"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal14')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal14',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal14"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal14"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View15',description='Metal15',position=(0.75,0.75,3.0)),
      Transform(translation=(0.75,0.75,0.0),
        children=[
        Anchor(description='Metal15 view',url=["#View15"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal15')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal15',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal15"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal15"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View16',description='Metal16',position=(2.25,0.75,3.0)),
      Transform(translation=(2.25,0.75,0.0),
        children=[
        Anchor(description='Metal16 view',url=["#View16"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal16')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal16',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal6","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal16"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal16"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View17',description='Metal17',position=(3.75,0.75,3.0)),
      Transform(translation=(3.75,0.75,0.0),
        children=[
        Anchor(description='Metal17 view',url=["#View17"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal17')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal17',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal17"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal17"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View18',description='Metal18',position=(-3.75,-0.75,3.0)),
      Transform(translation=(-3.75,-0.75,0.0),
        children=[
        Anchor(description='Metal18 view',url=["#View18"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal18')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal18',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal18"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal18"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View19',description='Metal19',position=(-2.25,-0.75,3.0)),
      Transform(translation=(-2.25,-0.75,0.0),
        children=[
        Anchor(description='Metal19 view',url=["#View19"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal19')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal19',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal19"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal19"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View20',description='Metal20',position=(-0.75,-0.75,3.0)),
      Transform(translation=(-0.75,-0.75,0.0),
        children=[
        Anchor(description='Metal20 view',url=["#View20"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal20')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal20',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal20"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal20"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View21',description='Metal21',position=(0.75,-0.75,3.0)),
      Transform(translation=(0.75,-0.75,0.0),
        children=[
        Anchor(description='Metal21 view',url=["#View21"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal21')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal21',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal21"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal21"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View22',description='Metal22',position=(2.25,-0.75,3.0)),
      Transform(translation=(2.25,-0.75,0.0),
        children=[
        Anchor(description='Metal22 view',url=["#View22"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal22')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal22',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal2","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal22"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal22"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View23',description='Metal23',position=(3.75,-0.75,3.0)),
      Transform(translation=(3.75,-0.75,0.0),
        children=[
        Anchor(description='Metal23 view',url=["#View23"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal23')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal23',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal3","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal23"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal23"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View24',description='Metal24',position=(-3.75,-2.25,3.0)),
      Transform(translation=(-3.75,-2.25,0.0),
        children=[
        Anchor(description='Metal24 view',url=["#View24"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal24')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal24',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal24"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal24"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View25',description='Metal25',position=(-2.25,-2.25,3.0)),
      Transform(translation=(-2.25,-2.25,0.0),
        children=[
        Anchor(description='Metal25 view',url=["#View25"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal25')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal25',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal25"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal25"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View26',description='Metal26',position=(-0.75,-2.25,3.0)),
      Transform(translation=(-0.75,-2.25,0.0),
        children=[
        Anchor(description='Metal26 view',url=["#View26"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal26')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal26',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal26"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal26"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View27',description='Metal27',position=(0.75,-2.25,3.0)),
      Transform(translation=(0.75,-2.25,0.0),
        children=[
        Anchor(description='Metal27 view',url=["#View27"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal27')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal27',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal27"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal27"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View28',description='Metal28',position=(2.25,-2.25,3.0)),
      Transform(translation=(2.25,-2.25,0.0),
        children=[
        Anchor(description='Metal28 view',url=["#View28"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal28')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal28',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal28"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal28"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View29',description='Metal29',position=(3.75,-2.25,3.0)),
      Transform(translation=(3.75,-2.25,0.0),
        children=[
        Anchor(description='Metal29 view',url=["#View29"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal29')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal29',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal29"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal29"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View30',description='Metal30',position=(-3.75,-3.75,3.0)),
      Transform(translation=(-3.75,-3.75,0.0),
        children=[
        Anchor(description='Metal30 view',url=["#View30"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal30')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal30',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal30"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal30"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View31',description='Metal31',position=(-2.25,-3.75,3.0)),
      Transform(translation=(-2.25,-3.75,0.0),
        children=[
        Anchor(description='Metal31 view',url=["#View31"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal31')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal31',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal31"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal31"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View32',description='Metal32',position=(-0.75,-3.75,3.0)),
      Transform(translation=(-0.75,-3.75,0.0),
        children=[
        Anchor(description='Metal32 view',url=["#View32"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal32')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal32',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal32"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal32"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View33',description='Metal33',position=(0.75,-3.75,3.0)),
      Transform(translation=(0.75,-3.75,0.0),
        children=[
        Anchor(description='Metal33 view',url=["#View33"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal33')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal33',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal33"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal33"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View34',description='Metal34',position=(2.25,-3.75,3.0)),
      Transform(translation=(2.25,-3.75,0.0),
        children=[
        Anchor(description='Metal34 view',url=["#View34"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Metal34')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Metal34',parameter=["target=_source"],url=["MetalsPrototypes.html#ProtoDeclare_Metal34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/MetalsPrototypes.html#ProtoDeclare_Metal34"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Metal34"],
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

print ("python x3d.py load successful for MetalsExamples.py")
