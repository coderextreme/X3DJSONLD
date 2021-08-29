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
    meta(content='SpringExamples.x3d',name='title'),
    meta(content="Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples.",name='description'),
    meta(content='David Roussel',name='creator'),
    meta(content='James Harney, Don Brutzman NPS',name='translator'),
    meta(content='7 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://vrmlstuff.free.fr/materials',name='reference'),
    meta(content='Universal Media Material Library',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringExamples.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SpringExamples.x3d'),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring00',url=["SpringPrototypes.x3d#Spring00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring00","SpringPrototypes.wrl#Spring00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring00"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring01',url=["SpringPrototypes.x3d#Spring01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring01","SpringPrototypes.wrl#Spring01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring01"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring02',url=["SpringPrototypes.x3d#Spring02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring02","SpringPrototypes.wrl#Spring02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring02"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring03',url=["SpringPrototypes.x3d#Spring03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring03","SpringPrototypes.wrl#Spring03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring03"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring04',url=["SpringPrototypes.x3d#Spring04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring04","SpringPrototypes.wrl#Spring04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring04"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring05',url=["SpringPrototypes.x3d#Spring05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring05","SpringPrototypes.wrl#Spring05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring05"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring06',url=["SpringPrototypes.x3d#Spring06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring06","SpringPrototypes.wrl#Spring06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring06"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring07',url=["SpringPrototypes.x3d#Spring07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring07","SpringPrototypes.wrl#Spring07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring07"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring08',url=["SpringPrototypes.x3d#Spring08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring08","SpringPrototypes.wrl#Spring08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring08"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring09',url=["SpringPrototypes.x3d#Spring09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring09","SpringPrototypes.wrl#Spring09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring09"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring10',url=["SpringPrototypes.x3d#Spring10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring10","SpringPrototypes.wrl#Spring10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring10"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring11',url=["SpringPrototypes.x3d#Spring11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring11","SpringPrototypes.wrl#Spring11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring11"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring12',url=["SpringPrototypes.x3d#Spring12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring12","SpringPrototypes.wrl#Spring12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring12"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring13',url=["SpringPrototypes.x3d#Spring13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring13","SpringPrototypes.wrl#Spring13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring13"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring14',url=["SpringPrototypes.x3d#Spring14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring14","SpringPrototypes.wrl#Spring14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring14"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring15',url=["SpringPrototypes.x3d#Spring15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring15","SpringPrototypes.wrl#Spring15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring15"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring16',url=["SpringPrototypes.x3d#Spring16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring16","SpringPrototypes.wrl#Spring16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring16"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring17',url=["SpringPrototypes.x3d#Spring17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring17","SpringPrototypes.wrl#Spring17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring17"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring18',url=["SpringPrototypes.x3d#Spring18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring18","SpringPrototypes.wrl#Spring18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring18"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring19',url=["SpringPrototypes.x3d#Spring19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring19","SpringPrototypes.wrl#Spring19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring19"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring20',url=["SpringPrototypes.x3d#Spring20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring20","SpringPrototypes.wrl#Spring20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring20"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring21',url=["SpringPrototypes.x3d#Spring21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring21","SpringPrototypes.wrl#Spring21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring21"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring22',url=["SpringPrototypes.x3d#Spring22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring22","SpringPrototypes.wrl#Spring22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring22"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring23',url=["SpringPrototypes.x3d#Spring23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring23","SpringPrototypes.wrl#Spring23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring23"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring24',url=["SpringPrototypes.x3d#Spring24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring24","SpringPrototypes.wrl#Spring24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring24"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring25',url=["SpringPrototypes.x3d#Spring25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring25","SpringPrototypes.wrl#Spring25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring25"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring26',url=["SpringPrototypes.x3d#Spring26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring26","SpringPrototypes.wrl#Spring26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring26"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring27',url=["SpringPrototypes.x3d#Spring27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring27","SpringPrototypes.wrl#Spring27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring27"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring28',url=["SpringPrototypes.x3d#Spring28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring28","SpringPrototypes.wrl#Spring28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring28"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring29',url=["SpringPrototypes.x3d#Spring29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring29","SpringPrototypes.wrl#Spring29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring29"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring30',url=["SpringPrototypes.x3d#Spring30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring30","SpringPrototypes.wrl#Spring30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring30"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring31',url=["SpringPrototypes.x3d#Spring31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring31","SpringPrototypes.wrl#Spring31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring31"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring32',url=["SpringPrototypes.x3d#Spring32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring32","SpringPrototypes.wrl#Spring32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring32"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring33',url=["SpringPrototypes.x3d#Spring33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring33","SpringPrototypes.wrl#Spring33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring33"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring34',url=["SpringPrototypes.x3d#Spring34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d#Spring34","SpringPrototypes.wrl#Spring34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.wrl#Spring34"]),
    Group(bboxSize=(10.5,10.5,2.0),
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
          Inline(url=["gridBack.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d","gridBack.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl"])])]),
      Viewpoint(DEF='View00',description='Spring00',position=(-3.75,3.75,3.0)),
      Transform(translation=(-3.75,3.75,0.0),
        children=[
        Anchor(description='Spring00 view',url=["#View00"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring00')),
            geometry=Sphere(DEF='Ball',radius=0.5))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring00',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring00"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='TextMat',diffuseColor=(1.0,1.0,1.0))),
              geometry=Text(string=["Spring00"],
                fontStyle=FontStyle(DEF='Style',family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.3,style_='BOLD')))])])]),
      Viewpoint(DEF='View01',description='Spring01',position=(-2.25,3.75,3.0)),
      Transform(translation=(-2.25,3.75,0.0),
        children=[
        Anchor(description='Spring01 view',url=["#View01"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring01')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring01',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring01"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring01"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View02',description='Spring02',position=(-0.75,3.75,3.0)),
      Transform(translation=(-0.75,3.75,0.0),
        children=[
        Anchor(description='Spring02 view',url=["#View02"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring02')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring02',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring02"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring02"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View03',description='Spring03',position=(0.75,3.75,3.0)),
      Transform(translation=(0.75,3.75,0.0),
        children=[
        Anchor(description='Spring03 view',url=["#View03"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring03')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring03',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring03"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring03"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View04',description='Spring04',position=(2.25,3.75,3.0)),
      Transform(translation=(2.25,3.75,0.0),
        children=[
        Anchor(description='Spring04 view',url=["#View04"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring04')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring04',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring04"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring04"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View05',description='Spring05',position=(3.75,3.75,3.0)),
      Transform(translation=(3.75,3.75,0.0),
        children=[
        Anchor(description='Spring05 view',url=["#View05"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring05')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring05',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring05"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring05"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View06',description='Spring06',position=(-3.75,2.25,3.0)),
      Transform(translation=(-3.75,2.25,0.0),
        children=[
        Anchor(description='Spring06 view',url=["#View06"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring06')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring06',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring06"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring06"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View07',description='Spring07',position=(-2.25,2.25,3.0)),
      Transform(translation=(-2.25,2.25,0.0),
        children=[
        Anchor(description='Spring07 view',url=["#View07"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring07')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring07',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring07"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring07"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View08',description='Spring08',position=(-0.75,2.25,3.0)),
      Transform(translation=(-0.75,2.25,0.0),
        children=[
        Anchor(description='Spring08 view',url=["#View08"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring08')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring08',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring08"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring08"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View09',description='Spring09',position=(0.75,2.25,3.0)),
      Transform(translation=(0.75,2.25,0.0),
        children=[
        Anchor(description='Spring09 view',url=["#View09"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring09')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring09',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring09"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring09"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View10',description='Spring10',position=(2.25,2.25,3.0)),
      Transform(translation=(2.25,2.25,0.0),
        children=[
        Anchor(description='Spring10 view',url=["#View10"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring10')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring10',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring10"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring10"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View11',description='Spring11',position=(3.75,2.25,3.0)),
      Transform(translation=(3.75,2.25,0.0),
        children=[
        Anchor(description='Spring11 view',url=["#View11"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring11')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring11',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring11"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring11"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View12',description='Spring12',position=(-3.75,0.75,3.0)),
      Transform(translation=(-3.75,0.75,0.0),
        children=[
        Anchor(description='Spring12 view',url=["#View12"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring12')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring12',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring12"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring12"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View13',description='Spring13',position=(-2.25,0.75,3.0)),
      Transform(translation=(-2.25,0.75,0.0),
        children=[
        Anchor(description='Spring13 view',url=["#View13"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring13')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring13',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring13"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring13"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View14',description='Spring14',position=(-0.75,0.75,3.0)),
      Transform(translation=(-0.75,0.75,0.0),
        children=[
        Anchor(description='Spring14 view',url=["#View14"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring14')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring14',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring14"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring14"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View15',description='Spring15',position=(0.75,0.75,3.0)),
      Transform(translation=(0.75,0.75,0.0),
        children=[
        Anchor(description='Spring15 view',url=["#View15"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring15')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring15',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring15"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring15"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View16',description='Spring16',position=(2.25,0.75,3.0)),
      Transform(translation=(2.25,0.75,0.0),
        children=[
        Anchor(description='Spring16 view',url=["#View16"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring16')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring16',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring16"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring16"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View17',description='Spring17',position=(3.75,0.75,3.0)),
      Transform(translation=(3.75,0.75,0.0),
        children=[
        Anchor(description='Spring17 view',url=["#View17"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring17')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring17',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring17"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring17"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View18',description='Spring18',position=(-3.75,-0.75,3.0)),
      Transform(translation=(-3.75,-0.75,0.0),
        children=[
        Anchor(description='Spring18 view',url=["#View18"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring18')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring18',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring18"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring18"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View19',description='Spring19',position=(-2.25,-0.75,3.0)),
      Transform(translation=(-2.25,-0.75,0.0),
        children=[
        Anchor(description='Spring19 view',url=["#View19"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring19')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring19',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring19"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring19"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View20',description='Spring20',position=(-0.75,-0.75,3.0)),
      Transform(translation=(-0.75,-0.75,0.0),
        children=[
        Anchor(description='Spring20 view',url=["#View20"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring20')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring20',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring20"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring20"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View21',description='Spring21',position=(0.75,-0.75,3.0)),
      Transform(translation=(0.75,-0.75,0.0),
        children=[
        Anchor(description='Spring21 view',url=["#View21"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring21')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring21',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring21"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring21"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View22',description='Spring22',position=(2.25,-0.75,3.0)),
      Transform(translation=(2.25,-0.75,0.0),
        children=[
        Anchor(description='Spring22 view',url=["#View22"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring22')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring22',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring22"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring22"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View23',description='Spring23',position=(3.75,-0.75,3.0)),
      Transform(translation=(3.75,-0.75,0.0),
        children=[
        Anchor(description='Spring23 view',url=["#View23"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring23')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring23',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring23"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring23"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View24',description='Spring24',position=(-3.75,-2.25,3.0)),
      Transform(translation=(-3.75,-2.25,0.0),
        children=[
        Anchor(description='Spring24 view',url=["#View24"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring24')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring24',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring24"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring24"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View25',description='Spring25',position=(-2.25,-2.25,3.0)),
      Transform(translation=(-2.25,-2.25,0.0),
        children=[
        Anchor(description='Spring25 view',url=["#View25"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring25')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring25',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring25"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring25"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View26',description='Spring26',position=(-0.75,-2.25,3.0)),
      Transform(translation=(-0.75,-2.25,0.0),
        children=[
        Anchor(description='Spring26 view',url=["#View26"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring26')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring26',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring26"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring26"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View27',description='Spring27',position=(0.75,-2.25,3.0)),
      Transform(translation=(0.75,-2.25,0.0),
        children=[
        Anchor(description='Spring27 view',url=["#View27"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring27')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring27',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring27"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring27"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View28',description='Spring28',position=(2.25,-2.25,3.0)),
      Transform(translation=(2.25,-2.25,0.0),
        children=[
        Anchor(description='Spring28 view',url=["#View28"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring28')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring28',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring28"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring28"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View29',description='Spring29',position=(3.75,-2.25,3.0)),
      Transform(translation=(3.75,-2.25,0.0),
        children=[
        Anchor(description='Spring29 view',url=["#View29"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring29')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring29',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring29"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring29"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View30',description='Spring30',position=(-3.75,-3.75,3.0)),
      Transform(translation=(-3.75,-3.75,0.0),
        children=[
        Anchor(description='Spring30 view',url=["#View30"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring30')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring30',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring30"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring30"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View31',description='Spring31',position=(-2.25,-3.75,3.0)),
      Transform(translation=(-2.25,-3.75,0.0),
        children=[
        Anchor(description='Spring31 view',url=["#View31"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring31')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring31',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring31"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring31"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View32',description='Spring32',position=(-0.75,-3.75,3.0)),
      Transform(translation=(-0.75,-3.75,0.0),
        children=[
        Anchor(description='Spring32 view',url=["#View32"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring32')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring32',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring32"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring32"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View33',description='Spring33',position=(0.75,-3.75,3.0)),
      Transform(translation=(0.75,-3.75,0.0),
        children=[
        Anchor(description='Spring33 view',url=["#View33"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring33')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring33',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring33"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring33"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View34',description='Spring34',position=(2.25,-3.75,3.0)),
      Transform(translation=(2.25,-3.75,0.0),
        children=[
        Anchor(description='Spring34 view',url=["#View34"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Spring34')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Spring34',parameter=["target=_source"],url=["SpringPrototypes.html#ProtoDeclare_Spring34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.html#ProtoDeclare_Spring34"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Spring34"],
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

print ("python x3d.py load successful for SpringExamples.py")
